// Struct digunakan untuk mengelompokan data dalam satu kesatuan
// Contoh:
#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    Mahasiswa m1;
    m1.nama = "Hanif Arib Fawwaz";
    m1.umur = 18;
    m1.ipk = 3.75;

    cout << "Nama: " << m1.nama;
    cout << "Umur: " << m1.umur;
    cout << "Ipk: " << m1.ipk;
}

// class mirip struct, tapi punya akses kontrol (Private, public, dll) dan bisa punya fungsi didalamnya
// Contoh:

class Mobil {
    public:
        string merk;
        int tahun;
        void info() {
            cout << "Mobil " << merk << ", Tahun" << tahun;
        }
};

int main() {
    Mobil m1;
    m1.merk = "Toyota";
    m1.tahun = 2020;
    m1.info();
}