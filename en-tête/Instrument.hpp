#ifndef INSTRUMENT_HPP
#define INSTRUMENT_HPP


class Instrument {
protected:
    std::string nom;
    std::string rythme;

public:
    Instrument(const std::string& nomInstrument);
    virtual ~Instrument() {}

    void setRythme(const std::string& rythmeChoisi);
    virtual void jouerNote(const std::string& note) const = 0;
};

#endif