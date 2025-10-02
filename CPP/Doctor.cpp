#ifndef DOCTOR_CPP
#define DOCTOR_CPP

#include <iostream>
#include "Person.cpp"
using namespace std;

class Doctor : public Person {
private:
    string idDokter;
    string spesialis;
    string jadwalPraktek;

public:
    Doctor() {}
    Doctor(string nama, string notelp, string alamat, string id, string spesialis, string jadwal)
        : Person(nama, notelp, alamat) {
        this->idDokter = id;
        this->spesialis = spesialis;
        this->jadwalPraktek = jadwal;
    }

    void setIdDokter(string id) { idDokter = id; }
    void setSpesialis(string spesialis) { this->spesialis = spesialis; }
    void setJadwalPraktek(string jadwal) { jadwalPraktek = jadwal; }

    string getIdDokter() const { return idDokter; }
    string getSpesialis() const { return spesialis; }
    string getJadwalPraktek() const { return jadwalPraktek; }

    void printDoctor() const {
        cout << "[Doctor] "; 
        Person::printInfo();
        cout << ", ID: " << idDokter << ", Spesialis: " << spesialis 
             << ", Jadwal: " << jadwalPraktek << endl;
    }
};

#endif

