#include <iostream>
using namespace std;

void rata_rata(float a, float b) {
    float jumlah;
    jumlah = a / b;
    cout << "Jumlah nilai: " << jumlah << "\n";
};

int main() {
    int c;
    cout << "Banyak elemen : ";
    cin >> c;

    int* data = new int[c];
    for (int i = 0; i < c; i++) {
        cout << "Masukan nilai ke-" << i + 1;
        cin >> data[i];
    }

    cout << "Data yang dimasukan:\n";
    for (int i = 0; i < c; i++) {
        cout << data[i] << " ";
    }

    cout << "Banyak elemen / data yang dimasukan";
    for (int i = 0; i < c; i++) {
        rata_rata(c, data[c]);
    }
}