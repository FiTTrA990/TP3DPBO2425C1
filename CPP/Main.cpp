#include <iostream>
#include "Person.cpp"
#include "Doctor.cpp"
#include "Patient.cpp"
#include "Perawat.cpp"
#include "Hospital.cpp"
using namespace std;

int main() {
    Hospital h("Rumah Sakit Bersama", "Jl. Merdeka No. 10", "ICU, Laboratorium, Apotek");

    cout << "=== Data Awal ===" << endl;
    h.printInfo();

    Doctor d1("Dr. Hadiyanto", "081111", "Bandung", "D01", "Dentist", "Senin-Kamis");
    Doctor d2("Dr. Adam", "082222", "Jakarta", "D02", "Neurology", "Selasa-Jumat");
    h.addDoctor(d1);
    h.addDoctor(d2);

    Patient p1("Loki", "083333", "Bandung", "P01", "Flu", "Rawat Jalan");
    Patient p2("Paul", "084444", "Jakarta", "P02", "Migraine", "Rawat Inap");
    Patient p3("Nurul", "085555", "Bandung", "P03", "Demam", "Rawat Jalan");
    h.addPatient(p1);
    h.addPatient(p2);
    h.addPatient(p3);

    Perawat pr1("Nurul", "085555", "Bandung", "PR01", "Pagi", "Ruang A");
    Perawat pr2("Aulia", "086666", "Jakarta", "PR02", "Malam", "Ruang B");
    h.addPerawat(pr1);
    h.addPerawat(pr2);

    cout << "\n=== Data Setelah Ditambahkan ===" << endl;
    h.printInfo();

    return 0;
}

