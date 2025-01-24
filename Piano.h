#ifndef PIANO_H
#define PIANO_H

#include "Instrument.h"

class Piano : public Instrument {
public:
    Piano();
    void jouerNote(const std::string& note) const override;
};

#endif
