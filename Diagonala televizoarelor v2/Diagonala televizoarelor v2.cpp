// Diagonala televizoarelor v2.cpp : 
/*

Creeati un program ce salveaza TV-uri cu lungiea in inalimea lor

Programul trebuie sa declare o classa TV ce au membri height and widh ,
o metoda arie() ce calculeaza aria si un construcotr ce initializaza membrii clasei

*/

#include <iostream>
#include "tv.h"

void afisare();
void meniu();

int main()
{
    afisare();
    meniu();
   // tv Acces;
   // Acces.Calculam_diagonala_cm();
}

void afisare() {
    std::string spatiu = " ";
    for (int i = 0; i < 50; i++) {
        std::cout << spatiu;
        if (i == 49) {
            std::cout << "Calculator arie\n\n\n";
        }
    }
}

void meniu() {
    tv Acces;
    int int_selectie = 0;
    std::cout << "Calculeaza aria :\n\n";
    std::cout << " 1 date de intrare in cm\n";
    std::cout << " 2 date de intrare in inch\n\n";
    std::cout << "Optiunea dumneavoastra este : ";
    std::cin >> int_selectie;

    if (int_selectie == 1) {
        system("CLS");
        Acces.Calculam_diagonala_cm();
        main();
    }

    else if (int_selectie == 2) {
        system("CLS");
        Acces.Calculam_diagonala_inch();
        main();
    }

    else {
        int_selectie = 0;
        system("CLS");
        main();
    }

}