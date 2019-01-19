#include "pch.h"
#include "Student.h"


Student::Student():imie(""),nazwisko("")
{
}





Student::~Student(){}

int Student::ileObecnosci()
{
	int suma = 0;
	for (int i = 0; i < obecnosci.size(); i++) {
		suma += obecnosci[i];
	}
	return suma;
}

void Student::obliczOcene()
{
	try {
		if (ileObecnosci() < 0.5*obecnosci.size()) throw Lack_of_presence();
		double punkciki = 0;
		for (int i = 0; i < punkty.size(); i++) {
			punkciki += punkty[i];
		}
		ocena = (punkciki / 45) * 100;
	}
	catch(Lack_of_presence &e){
		cout << e.what() << endl;
	}
}

void Student::wypisz()
{
	try
	{
		if (imie == "") throw No_Data();
		if (nazwisko=="") throw No_Data();
		if (punkty.size() == 0) throw No_Data();
		if (obecnosci.size() == 0) throw No_Data();

		cout << imie << " " << nazwisko << endl << "Punkty:\t \t";
		for (int i = 0; i < punkty.size(); i++) {
			cout << punkty[i] << " ";
		}
		cout << endl << "Obecnosci: \t";
		for (int i = 0; i < obecnosci.size(); i++) {
			cout << obecnosci[i] << " ";
		}
		cout << endl;
		

	}
	catch(No_Data &e){
		cout << e.what() << endl;
	}
}
