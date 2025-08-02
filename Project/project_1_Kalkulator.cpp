#include <iostream>
using namespace std;

// Tambah
int tambah(int a, int b) {
    return a + b;
}

// Kurang
int kurang(int a, int b) {
    return a - b;
}

// bagi
int bagi(int a, int b) {
    return a / b;
}

// Kali
int kali(int a, int b) {
    return a * b;
}

int main() {
    int nomor;
    int angka1;
    int angka2;
    int total;
    cout << "1.Tambah \n 2.Kurang \n 3.Bagi \n 4.Kali \n Masukan angka sesuai dengan menu : ";
    cin >> nomor;

    if (nomor == 1) {
        cout << "Masukan angka ke 1: ";
        cin >> angka1; 
        cout << "Masukan angka ke 2: ";
        cin >> angka2;
        total = tambah(angka1, angka2);
        cout << "Hasil: " << total;
    }

    
    else if (nomor == 2) {
        cout << "Masukan angka ke 1: ";
        cin >> angka1; 
        cout << "Masukan angka ke 2: ";
        cin >> angka2;
        total = kurang(angka1, angka2);
        cout << "Hasil: " << total;
    }

    
    else if (nomor == 3) {
        cout << "Masukan angka ke 1: ";
        cin >> angka1; 
        cout << "Masukan angka ke 2: ";
        cin >> angka2;
        total = bagi(angka1, angka2);
        cout << "Hasil: " << total;
    }

    
    else if (nomor == 4) {
        cout << "Masukan angka ke 1: ";
        cin >> angka1; 
        cout << "Masukan angka ke 2: ";
        cin >> angka2;
        total = kali(angka1, angka2);
        cout << "Hasil: " << total;
    }

    else {
        cout << "Menu Tidak Ada!";
    }
}