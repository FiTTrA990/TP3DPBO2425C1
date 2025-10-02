# Doctor.py
# Kelas turunan Person -> Dokter

from Person import Person

class Doctor(Person):
    def __init__(self, nama="", notelp="", alamat="", id_dokter="", spesialis="", jadwal=""):
        super().__init__(nama, notelp, alamat)  # Panggil constructor Person
        self.__id_dokter = id_dokter
        self.__spesialis = spesialis
        self.__jadwal_praktek = jadwal

    # Setter
    def set_id_dokter(self, id_dokter):
        self.__id_dokter = id_dokter

    def set_spesialis(self, spesialis):
        self.__spesialis = spesialis

    def set_jadwal_praktek(self, jadwal):
        self.__jadwal_praktek = jadwal

    # Getter
    def get_id_dokter(self):
        return self.__id_dokter

    def get_spesialis(self):
        return self.__spesialis

    def get_jadwal_praktek(self):
        return self.__jadwal_praktek

    # Print data dokter
    def print_doctor(self):
        print("[Doctor] ", end="")
        super().print_info()
        print(f", ID: {self.__id_dokter}, Spesialis: {self.__spesialis}, Jadwal: {self.__jadwal_praktek}")

