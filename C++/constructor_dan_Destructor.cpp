// Constructor
//  - Fungsi khusus yang dipanggil otomatis saat objek dibuat
//  - Bisa digunakan untuk inisialisasi

// Destructor
//  - Fungsi khusus yang dipanggil otomatis saat objek dihancurkan
//  - Biasanya digunakan untuk bersih-bersih memori

// Contoh:
#include <iostream>
using namespace std;

class Mahasiswa {
    public:
        string nama;

        // Constructor
        Mahasiswa(string n) {
            nama = n;
            cout << "Mahasiswa " << nama << "dibuat\n";
        }

        // Destructor
        ~Mahasiswa() {
            cout << "Mahasiswa " << nama << "dihancurkan\n";
        }

        void sapa() {
            cout << "Halo, Saya " << nama << endl;
        }
    };

    

int main() {
    Mahasiswa m1("Hanif");
    m1.sapa();
    // Pointer ke Object
    // Akses dengan -> (arrow operator)
    Mahasiswa* ptr = new Mahasiswa("Rina");
    ptr->sapa();
    delete ptr;
    return 0;
}

