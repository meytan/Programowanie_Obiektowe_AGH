// Exceptions.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include "Student.h"

int main()
{
	Student wiesiek;
	wiesiek.wypisz();
	Student maciek("Maciek","Elko");
	maciek.wypisz();
	Student stefek("Stefan", "Elko");
	for (int i = 0; i < 10; i++)
	{
		stefek.obecnosci[i] = 0;
	}
	stefek.obliczOcene();
	maciek.obliczOcene();

	cout << " Maciek uzyskal: " << maciek.ocena << "%";
}
