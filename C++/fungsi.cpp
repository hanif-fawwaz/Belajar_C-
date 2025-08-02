// Fungsi adalah blok code yang bisa digunakan berkali-kali
// contoh:
#include <iostream>
using namespace std;

void halo() {
    cout << "Halo, selamat datang!";
}

// Struktur Fungsi C++
// tipe_kembalian namafungsi(parameter) {
//     // isi fungsi
//     return nilai;
// }

// contoh fungsi dengan dan tanpa return
// Tanpa return(void)
void sapa(string nama) {
    cout << "Halo, " << nama << "!";
}

// dengan return
int tambah(int a, int b) {
    return a + b;
}

// Cara panggilnya main():

int main() {
    sapa("Hanif");

    int hasil = tambah(3, 5);
    cout << "Hasil: " << hasil;
}

// Fungsi dengan input user
int kuadrat(int x) {
    return x * x;
}

int main() {
    int angka;
    cout << "masukan angka: ";
    cin >> angka;

    cout << "Kuadrat dari " << angka << " = " << kuadrat(angka);
}