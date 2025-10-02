#ifndef PERAWAT_CPP
#define PERAWAT_CPP

#include <iostream>
#include "Person.cpp"
using namespace std;

class Perawat : public Person {
private:
    string idPerawat;
    string shift;
    string ruangan;

public:
    Perawat() {}
    Perawat(string nama, string notelp, string alamat, string id, string shift, string ruangan)
        : Person(nama, notelp, alamat) {
        this->idPerawat = id;
        this->shift = shift;
        this->ruangan = ruangan;
    }

    void setIdPerawat(string id) { idPerawat = id; }
    void setShift(string shift) { this->shift = shift; }
    void setRuangan(string ruangan) { this->ruangan = ruangan; }

    string getIdPerawat() const { return idPerawat; }
    string getShift() const { return shift; }
    string getRuangan() const { return ruangan; }

    void printPerawat() const {
        cout << "[Perawat] ";
        Person::printInfo();
        cout << ", ID: " << idPerawat << ", Shift: " << shift 
             << ", Ruangan: " << ruangan << endl;
    }
};

#endif

