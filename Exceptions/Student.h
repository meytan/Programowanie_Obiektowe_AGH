#pragma once
class Student
{
public:
	Student();
	Student(string imie, string nazwisko) : imie(imie), nazwisko(nazwisko)
	{
		srand(time(NULL));
		for (int i = 0; i < 15; i++) {

			if (rand() % 10 > 1)
			{
				obecnosci.push_back(true);
				punkty.push_back(rand() % 4);

			}
			else
			{
				obecnosci.push_back(false);
				punkty.push_back(0);
			}
		}
	}
	~Student();
	string imie, nazwisko;
	vector<int> punkty;
	vector<bool> obecnosci;
	double ocena;
	int ileObecnosci();
	void obliczOcene();
	void wypisz();
	class No_Data : public std::exception
	{
		public:
			virtual char const * what() const { return "Brakuje danych"; }
	};
	class Lack_of_presence : public std::exception
	{
	public:
		virtual char const * what() const { return "Ponizej 50% obecnosci! Nie mozna wystawic oceny."; }
	};
};

