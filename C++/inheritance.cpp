// Inheritance adalah memungkinkan satu class (anak) mewariskan properti dan fungsi dari class lain (induk)
// contohnyatanya :
// - Kucing dan anjing bisa menjadi turunan dari hewan
// - Mobil dan motor bisa menjadi turunan dari kendaraan

// Sintaks dasar:
#include <iostream>
using namespace std;
class Induk {
    public:
        void sapa() {
            cout << "Halo dari class Induk\n";
        }
};

class Anak : public Induk {
    public:
        void salam() {
            cout << "ini class Anak\n";
        }
};

int main() {
    Anak obj;
    obj.sapa(); // dipanggil dari class Induk
    obj.salam(); // dipanggil dari class Anak
    return 0;
}

// Pewarisan Multi-Level
class A {
    public:
        void satu() {
                cout << "satu\n";
        }
};

class B : public A {
    public:
        void dua() {
            cout << "dua\n";
        }
};

class c : public B {
    public:
        void tiga() {
            cout << "tiga\n";
        }
};