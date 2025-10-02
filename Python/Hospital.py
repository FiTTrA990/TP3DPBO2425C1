# Hospital.py
# Kelas utama Rumah Sakit

from Doctor import Doctor
from Patient import Patient
from Perawat import Perawat

class Hospital:
    def __init__(self, nama, alamat, fasilitas):
        self.__nama_rs = nama
        self.__alamat_rs = alamat
        self.__fasilitas = fasilitas
        self.__doctors = []
        self.__patients = []
        self.__perawats = []

    # Setter
    def set_nama_rs(self, nama):
        self.__nama_rs = nama

    def set_alamat_rs(self, alamat):
        self.__alamat_rs = alamat

    def set_fasilitas(self, fasilitas):
        self.__fasilitas = fasilitas

    # Getter
    def get_nama_rs(self):
        return self.__nama_rs

    def get_alamat_rs(self):
        return self.__alamat_rs

    def get_fasilitas(self):
        return self.__fasilitas

    # Tambah data
    def add_doctor(self, d: Doctor):
        self.__doctors.append(d)

    def add_patient(self, p: Patient):
        self.__patients.append(p)

    def add_perawat(self, pr: Perawat):
        self.__perawats.append(pr)

    # Print semua data rumah sakit
    def print_info(self):
        print(f"=== Rumah Sakit: {self.__nama_rs} ===")
        print(f"Alamat: {self.__alamat_rs}, Fasilitas: {self.__fasilitas}")

        print("\n>> Doctors:")
        if not self.__doctors:
            print("(Belum ada data dokter)")
        for d in self.__doctors:
            d.print_doctor()

        print("\n>> Patients:")
        if not self.__patients:
            print("(Belum ada data pasien)")
        for p in self.__patients:
            p.print_patient()

        print("\n>> Perawats:")
        if not self.__perawats:
            print("(Belum ada data perawat)")
        for pr in self.__perawats:
            pr.print_perawat()

