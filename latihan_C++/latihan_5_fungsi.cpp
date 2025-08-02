#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int main() {
    int angka1;
    int angka2;
    int total;
    cout << "Masukan angka ke 1: ";
    cin >> angka1;

    cout << "Masukan angka ke 2: ";
    cin >> angka2;

    total = tambah(angka1, angka2);

    cout << "Hasil: " << total;
}