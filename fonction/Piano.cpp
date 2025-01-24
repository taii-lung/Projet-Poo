#include <iostream>
#include <memory>
#include <string>
#include "Instrument.hpp"

int OnJoueAuPiano(){

    char input;
    std::cout << "Entrez une lettre : ";
    std::cin >> input;


    if (input == 'a') {
        std::cout << "do" << std::endl;
    }
}