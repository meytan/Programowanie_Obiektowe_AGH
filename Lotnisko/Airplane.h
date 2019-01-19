#pragma once
#include "Passenger.h"
class Airplane
{
public:
	Airplane(int t_flight_nr, int t_max_passenger_number = 150);
	~Airplane() {};
private:
	int flight_nr;
	int current_passenger_number;
	const int max_passenger_number;
	Passenger **passengers;
	
public:
	bool add_passenger(Passenger *t_passenger);
	bool add_passenger(Passenger **t_passenger, int passenger_count);
	Passenger* get_passenger(int place);
	int get_flight_nr() { return flight_nr;}
	void set_flight_nr(int t_flight_nr) { flight_nr = t_flight_nr; }
	int get_current_passenger_number() { return current_passenger_number; }
	void set_current_passenger_number(int t_current_passenger_number) { current_passenger_number = t_current_passenger_number; }
	int get_max_passenger_number() { return max_passenger_number; }

};

