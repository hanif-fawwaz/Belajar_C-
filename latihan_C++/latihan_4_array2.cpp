#include <iostream>
using namespace std;

int main() {
    int nilai[5]; // array untuk 5 angka
    int total = 0; // variabel untuk menampung jumlah
    for (int i = 0; i < 5; i++) {
        cout << "angka ke-" << i+1 << " : ";
        cin >> nilai[1]; // simpan di array
        total += nilai[1]; // tambahkan ke total
    }

    // tampilkan hasil
    cout << "Total: " << total;

    return 0;
}