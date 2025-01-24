#ifndef PIANO_HPP
#define PIANO_HPP

#include "Instrument.hpp"

class Piano : public Instrument {
public:
    Piano();
    void jouerNote(const std::string& note) const override;
};

#endif