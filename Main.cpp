#include <iostream>
#include <string>
#include "Hospital.h"
#include "Doctor.h"
#include "Inpatient.h"
#include "Outpatient.h"
using namespace std;

int main() {
	int selection;

	Hospital* mainHospital;
	mainHospital = new Hospital;

	Inpatient* patient1;
	patient1 = new Inpatient;
	patient1->setName("Jane Doe");
	patient1->setAdmission(2, 5, 2020);
	patient1->setDischarge(2, 14, 2020);
	patient1->calculateCharge(2, 5, 2020, 2, 14, 2020);

	Outpatient* patient2;
	patient2 = new Outpatient;
	patient2->setName("Mich Wagner");
	patient2->setAppointment(4, 2, 2020, 15, 30);

	Doctor* doc1;
	doc1 = new Doctor;
	doc1->setName("Bucky Roberts");
	doc1->setSpeciality("Surgeon");
	doc1->setLicense("LC32");

	Doctor* doc2;
	doc2 = new Doctor;
	doc2->setName("Michelle Faris");
	doc2->setSpeciality("Allergist");
	doc2->setLicense("MF41");

	patient1->setDoctor(doc1);
	patient2->setDoctor(doc2);
	doc1->addPatient(patient1);
	doc2->addPatient(patient2);

	Bed* bed1;
	bed1 = new Bed;
	bed1->setOccupant(patient1);
	patient1->setBedNumber(bed1->getBedNumber());

	mainHospital->addDoctor(doc1);
	mainHospital->addDoctor(doc2);
	mainHospital->addInpatient(patient1);
	mainHospital->addBed(bed1);

	cout << "(1) Access Patient Information" << endl;
	cout << "(2) Access Doctor Information" << endl;
	cout << "(3) Check Bed Status" << endl;
	cout << "(4) Print Hospital Information" << endl;
	cout << "Enter the number of the desired operation or -1 to exit: ";
	cin >> selection;

	while(selection!=-1){
		switch (selection) {
			case 1: {
				int identification;
				cout << endl << "Enter patient id number (enter 001 or 1001): ";
				cin	>> identification;

				if(identification>1000)
					patient2->print();
				else
					mainHospital->searchInpatient(identification);

				cout << "Enter the number of the desired operation or -1 to exit: ";
				cin >> selection;
				break;
			}

			case 2: {
				string str;
				cout << endl << "Enter doctor license number (enter LC32 or MF41): ";
				cin.ignore();
				getline(cin, str);

				mainHospital->searchDoctor(str);
				
				cout << "Enter the number of the desired operation or -1 to exit: ";
				cin >> selection;
				break;
			}

			case 3: {
				int number;
				cout << endl << "Enter bed number (enter 1): ";
				cin >> number;

				mainHospital->searchBed(number);

				cout << "Enter the number of the desired operation or -1 to exit: ";
				cin >> selection;
				break;
			}

			case 4: {
				cout << endl << "** List of Doctors and Registered Inpatients **" << endl << endl;

				mainHospital->print();

				cout << "Enter the number of the desired operation or -1 to exit: ";
				cin >> selection;
				break;
			}
		}

	}
}
