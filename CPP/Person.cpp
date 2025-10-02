#ifndef PERSON_CPP
#define PERSON_CPP

#include <iostream>
using namespace std;

class Person {
private:
    string nama;
    string notelp;
    string alamat;

public:
    Person() {}
    Person(string nama, string notelp, string alamat) {
        this->nama = nama;
        this->notelp = notelp;
        this->alamat = alamat;
    }

    // Setter
    void setNama(string nama) { this->nama = nama; }
    void setNotelp(string notelp) { this->notelp = notelp; }
    void setAlamat(string alamat) { this->alamat = alamat; }

    // Getter
    string getNama() const { return nama; }
    string getNotelp() const { return notelp; }
    string getAlamat() const { return alamat; }

    virtual void printInfo() const {
        cout << "Nama: " << nama << ", Telp: " << notelp << ", Alamat: " << alamat;
    }
};

#endif

