# Patient.py
# Kelas turunan Person -> Pasien

from Person import Person

class Patient(Person):
    def __init__(self, nama="", notelp="", alamat="", id_pasien="", penyakit="", status=""):
        super().__init__(nama, notelp, alamat)
        self.__id_pasien = id_pasien
        self.__penyakit = penyakit
        self.__status_rawat = status

    # Setter
    def set_id_pasien(self, id_pasien):
        self.__id_pasien = id_pasien

    def set_penyakit(self, penyakit):
        self.__penyakit = penyakit

    def set_status_rawat(self, status):
        self.__status_rawat = status

    # Getter
    def get_id_pasien(self):
        return self.__id_pasien

    def get_penyakit(self):
        return self.__penyakit

    def get_status_rawat(self):
        return self.__status_rawat

    # Print data pasien
    def print_patient(self):
        print("[Patient] ", end="")
        super().print_info()
        print(f", ID: {self.__id_pasien}, Penyakit: {self.__penyakit}, Status: {self.__status_rawat}")

