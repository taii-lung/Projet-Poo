#include <iostream>
#include <memory>
#include <string>
#include "Instrument.hpp"
#include "Piano.hpp"
#include "guitare.hpp"
#include "xylophone.hpp"

std::unique_ptr<Instrument> choisirInstrument() {
    std::string choix;

    while (true) {
        std::cout << "Choisissez un instrument (Piano, guitare, xylophone) : ";
        std::cin >> choix;

        // Convertir le choix en minuscules pour éviter les erreurs de casse
        for (char &c : choix) {
            c = std::tolower(c);
        }

        if (choix == "piano") {
            return std::make_unique<Piano>();
        } else if (choix == "guitare") {
            return std::make_unique<Guitare>();
        } else if (choix == "xylophone") {
            return std::make_unique<Xylophone>();
        } else {
            std::cout << "Erreur : instrument inconnu. Veuillez réessayer." << std::endl;
        }
    }
}


int main() {
  choisirInstrument(); // call the function
  return 0;
}