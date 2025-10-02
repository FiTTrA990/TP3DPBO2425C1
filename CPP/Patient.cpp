#ifndef PATIENT_CPP
#define PATIENT_CPP

#include <iostream>
#include "Person.cpp"
using namespace std;

class Patient : public Person {
private:
    string idPasien;
    string penyakit;
    string statusRawat;

public:
    Patient() {}
    Patient(string nama, string notelp, string alamat, string id, string penyakit, string status)
        : Person(nama, notelp, alamat) {
        this->idPasien = id;
        this->penyakit = penyakit;
        this->statusRawat = status;
    }

    void setIdPasien(string id) { idPasien = id; }
    void setPenyakit(string penyakit) { this->penyakit = penyakit; }
    void setStatusRawat(string status) { statusRawat = status; }

    string getIdPasien() const { return idPasien; }
    string getPenyakit() const { return penyakit; }
    string getStatusRawat() const { return statusRawat; }

    void printPatient() const {
        cout << "[Patient] "; 
        Person::printInfo();
        cout << ", ID: " << idPasien << ", Penyakit: " << penyakit 
             << ", Status: " << statusRawat << endl;
    }
};

#endif

