#include "Passenger.h"
#include "Airplane.h"


void show_free_places(Airplane *a);

int main() {
	Passenger* passenger = new Passenger("Mati", "Bombel", "6969692137", 12);
	Passenger* passengers[10] = {
		new Passenger("Mati", "Bombel", "6969692137", 23),
		new Passenger("Mati", "Bombel", "6969692137", 1),
		new Passenger("Mati", "Bombel", "6969692137", 2),
		new Passenger("Mati", "Bombel", "6969692137", 42),
		new Passenger("Mati", "Bombel", "6969692137", 22),
		new Passenger("Mati", "Bombel", "6969692137", 32),
		new Passenger("Mati", "Bombel", "6969692137", 52),
		new Passenger("Mati", "Bombel", "6969692137", 16),
		new Passenger("Mati", "Bombel", "6969692137", 15),
		new Passenger("Mati", "Bombel", "6969692137", 8)
	};

	std::cout << passenger->get_place();
	
	Airplane airplane1(2115, 60);
	Airplane airplane2(2137);

	airplane1.add_passenger(passenger);
	airplane2.add_passenger(passengers, 10);
	Airplane *air = &airplane1;
	show_free_places(air);
	air = &airplane2;
	show_free_places(air);
	std::cin.get();

}

void show_free_places(Airplane *a) {
	std::cout << "--------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "IN A FLIGHT NR. " << a->get_flight_nr() << " WE HAVE " << a->get_max_passenger_number() - a->get_current_passenger_number() << " FREE SEATS" << std::endl;
	std::cout << "FREE SEATS: ";
	for (int i = 0; i < a->get_max_passenger_number(); i++) {
		if (a->get_passenger(i) == NULL) {
			std::cout << i << ", ";
		}
	}



}