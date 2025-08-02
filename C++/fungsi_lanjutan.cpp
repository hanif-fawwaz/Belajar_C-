// fungsi dengan parameter default
#include <iostream>
using namespace std;

void sapa(string nama = "Pengguna") {
    cout << "Halo, " << nama << "!";
}

int main() {
    sapa(); // Halo, Pengguna
    sapa("Hanif");  // Hallo, Hanif
}

// Funnction overloading
void cetak(int a) {
    cout << "Angka: " << a;
}

void cetak(string s) {
    cout << "Teks: " << s;
}

int main() {
    cetak(123);
    cetak("Hanif");
}