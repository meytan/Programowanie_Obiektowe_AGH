#pragma once
#include <iostream>
#include <string.h>

class Passenger
{
public:
	Passenger(std::string name, std::string surname, std::string pesel, int place) : name(name),surname(surname),pesel(pesel),place(place){};
	Passenger();
	~Passenger();
private:
	std::string name;
	std::string surname;
	std::string pesel;
	int place;

public:
	std::string get_name() { return name; }
	void set_name(std::string t_name) { name = t_name; }
	std::string get_surname() { return surname; }
	void set_surname(std::string t_surname) { surname = t_surname; }
	std::string get_pesel() { return pesel; }
	void set_pesel(std::string t_pesel) { pesel = t_pesel; }
	int get_place() { return place; }
	void set_place(int t_place) { place = t_place; }
};

