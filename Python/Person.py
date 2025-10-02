# Person.py
# Kelas dasar untuk semua orang di rumah sakit

class Person:
    def __init__(self, nama="", notelp="", alamat=""):
        self.__nama = nama
        self.__notelp = notelp
        self.__alamat = alamat

    # Setter
    def set_nama(self, nama):
        self.__nama = nama

    def set_notelp(self, notelp):
        self.__notelp = notelp

    def set_alamat(self, alamat):
        self.__alamat = alamat

    # Getter
    def get_nama(self):
        return self.__nama

    def get_notelp(self):
        return self.__notelp

    def get_alamat(self):
        return self.__alamat

    # Method untuk print info dasar
    def print_info(self):
        print(f"Nama: {self.__nama}, Telp: {self.__notelp}, Alamat: {self.__alamat}", end="")

