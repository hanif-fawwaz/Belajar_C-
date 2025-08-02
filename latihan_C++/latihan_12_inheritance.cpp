#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
    public:
        string merk;
        int tahun;

        void infokendaraan() {
            cout << "Mobil " << merk << ", Tahun" << tahun;
        }
};

class Mobil : public Kendaraan {
    public:
        string jenisbahanbakar;
        void infomobil() {
            cout << "Bahan Bakar " << jenisbahanbakar;
        }
};

int main() {
    Mobil m1;
    m1.merk = "Toyota";
    m1.tahun = 2023;
    m1.jenisbahanbakar = "Pertalite";
    m1.infokendaraan();
    m1.infomobil();
}