#include "Airplane.h"

Airplane::Airplane(int t_flight_nr, int t_max_passenger_number) :flight_nr(t_flight_nr), max_passenger_number(t_max_passenger_number), current_passenger_number(0)
{
	passengers = new Passenger*[max_passenger_number];
	for (int i = 0; i < max_passenger_number; i++) {
		passengers[i] = NULL;
	}
	
}



bool Airplane::add_passenger(Passenger * t_passenger)
{
	if (current_passenger_number < max_passenger_number && passengers[t_passenger->get_place()] == NULL) {
		passengers[t_passenger->get_place()] = t_passenger;
		current_passenger_number++;
		return true;
	}
	return false;
}

bool Airplane::add_passenger(Passenger ** t_passenger, int passengers_count)
{
	if (current_passenger_number + passengers_count < max_passenger_number) {
		for (int i = 0; i < passengers_count; i++) {
			if (passengers[t_passenger[i]->get_place()] != NULL) {
				return false;
			}
			passengers[t_passenger[i]->get_place()] = t_passenger[i];
			current_passenger_number++;

		}
		
		return true;
	}
	return false;
	
}

Passenger * Airplane::get_passenger(int place)
{
	return passengers[place];
}
	
