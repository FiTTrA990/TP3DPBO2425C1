# Perawat.py
# Kelas turunan Person -> Perawat

from Person import Person

class Perawat(Person):
    def __init__(self, nama="", notelp="", alamat="", id_perawat="", shift="", ruangan=""):
        super().__init__(nama, notelp, alamat)
        self.__id_perawat = id_perawat
        self.__shift = shift
        self.__ruangan = ruangan

    # Setter
    def set_id_perawat(self, id_perawat):
        self.__id_perawat = id_perawat

    def set_shift(self, shift):
        self.__shift = shift

    def set_ruangan(self, ruangan):
        self.__ruangan = ruangan

    # Getter
    def get_id_perawat(self):
        return self.__id_perawat

    def get_shift(self):
        return self.__shift

    def get_ruangan(self):
        return self.__ruangan

    # Print data perawat
    def print_perawat(self):
        print("[Perawat] ", end="")
        super().print_info()
        print(f", ID: {self.__id_perawat}, Shift: {self.__shift}, Ruangan: {self.__ruangan}")

