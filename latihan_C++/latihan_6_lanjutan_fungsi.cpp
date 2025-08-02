#include <iostream>
using namespace std;

void kali(float a, float b) {
    float jumlah;
    jumlah = a * b;
    cout << "Hasil: " << jumlah;
}

void kali(int a, int b) {
    int jumlah;
    jumlah = a * b;
    cout << "Hasil: " << jumlah;
}

int main() {
    // Float
    float angka3;
    float angka4;
    // Integer
    int angka1;
    int angka2;

    int pilihan;
    cout << "Pilih nomor 1-2 \n 1.perkalian(float) \n 2.Perkalian(integer) \n masukan nomor: ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        cout << "Selamat datang di Perkalian(float)!\n";
        cout << "Masukan dua angka untuk dikalihkan\n";
        cout << "Angka Pertama: ";
        cin >> angka3;
        cout << "Angka Kedua: ";
        cin >> angka4;
        kali(angka3, angka4);
        break;
    case 2:
        cout << "Selamat datang di Perkalian(int)!\n";
        cout << "Masukan dua angka untuk dikalihkan\n";
        cout << "Angka Pertama: ";
        cin >> angka1;
        cout << "Angka Kedua: ";
        cin >> angka2;
        kali(angka1, angka2);
        break;
    default:
        cout << "Tidak ada menu!";
        break;
    }
}