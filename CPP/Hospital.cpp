#ifndef HOSPITAL_CPP
#define HOSPITAL_CPP

#include <iostream>
#include <vector>
#include "Doctor.cpp"
#include "Patient.cpp"
#include "Perawat.cpp"
using namespace std;

class Hospital {
private:
    string namaRS;
    string alamatRS;
    string fasilitas;

    vector<Doctor> doctors;
    vector<Patient> patients;
    vector<Perawat> perawats;

public:
    Hospital(string nama, string alamat, string fasilitas) {
        this->namaRS = nama;
        this->alamatRS = alamat;
        this->fasilitas = fasilitas;
    }

    void setNamaRS(string nama) { namaRS = nama; }
    void setAlamatRS(string alamat) { alamatRS = alamat; }
    void setFasilitas(string fasilitas) { this->fasilitas = fasilitas; }

    string getNamaRS() const { return namaRS; }
    string getAlamatRS() const { return alamatRS; }
    string getFasilitas() const { return fasilitas; }

    void addDoctor(const Doctor& d) { doctors.push_back(d); }
    void addPatient(const Patient& p) { patients.push_back(p); }
    void addPerawat(const Perawat& pr) { perawats.push_back(pr); }

    void printInfo() {
        cout << "=== Rumah Sakit: " << namaRS << " ===" << endl;
        cout << "Alamat: " << alamatRS << ", Fasilitas: " << fasilitas << endl;

        cout << "\n>> Doctors:" << endl;
        if (doctors.empty()) cout << "(Belum ada data dokter)" << endl;
        for (auto& d : doctors) d.printDoctor();

        cout << "\n>> Patients:" << endl;
        if (patients.empty()) cout << "(Belum ada data pasien)" << endl;
        for (auto& p : patients) p.printPatient();

        cout << "\n>> Perawats:" << endl;
        if (perawats.empty()) cout << "(Belum ada data perawat)" << endl;
        for (auto& pr : perawats) pr.printPerawat();
    }
};

#endif
 
