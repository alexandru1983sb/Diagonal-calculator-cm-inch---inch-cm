#include "tv.h"

void tv::Calculam_diagonala_cm() {
	double int_val1 = 0;
	double int_val2 = 0;
	double rezultat = 0;
	double temp = 0;
	
	std::cout << "Datele sunt in cm\n";
	std::cout << "\n\n\nAdaugati Lungimea : ";
	std::cin >> int_val1;
	std::cout << "Adaugati Latimea : ";
	std::cin >> int_val2;
	std::cout << "Cum doriti sa fie afisat rezultatu : \n";
	std::cout << " 1 cm\n";
	std::cout << " 2 inch\n";
	std::cout << " Optiune dumneavoastra este : ";
	int derulator = 0;
	std::cin >> derulator;

	if (derulator == 1) {
		rezultat = (int_val1 * int_val1) + (int_val2 * int_val2);
		temp = sqrt(rezultat);
		std::cout << "Diagonala este de : ";
		std::cout << temp << " cm" << "\n";
	}
	if (derulator == 2) {
		rezultat = (int_val1 * int_val1) + (int_val2 * int_val2);
		temp = sqrt(rezultat);
		temp = temp * 0.3937;

		std::cout << "Diagonala este de : ";
		std::cout << temp << " inch" << "\n";
	}
}

void tv::Calculam_diagonala_inch()
{
	double int_val1 = 0;
	double int_val2 = 0;
	double rezultat = 0;
	double temp = 0;

	std::cout << "Datele sunt in inch\n";
	std::cout << "\n\n\nAdaugati Lungimea : ";
	std::cin >> int_val1;
	std::cout << "Adaugati Latimea : ";
	std::cin >> int_val2;
	std::cout << "Cum doriti sa fie afisat rezultatu : \n";
	std::cout << " 1 cm\n";
	std::cout << " 2 inch\n";
	std::cout << " Optiune dumneavoastra este : ";
	int derulator = 0;
	std::cin >> derulator;

	if (derulator == 1) {
		rezultat = (int_val1 * int_val1) + (int_val2 * int_val2);
		temp = sqrt(rezultat);
		temp = temp / 0.3937;
		std::cout << "Diagonala este de : ";
		std::cout << temp << " cm" << "\n";
	}
	if (derulator == 2) {
		rezultat = (int_val1 * int_val1) + (int_val2 * int_val2);
		temp = sqrt(rezultat);
		std::cout << "Diagonala este de : ";
		std::cout << temp << " inch" << "\n";
	}
}
