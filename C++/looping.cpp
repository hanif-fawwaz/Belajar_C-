// Jenis-Jenis lopping di C++
#include <iostream>
using namespace std;

// For loop
// Digunakan saat jumlah pengulangan sudah diketahui.
// Contoh:
int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Angka ke-" << i << endl;
    }

    return 0;
}

// - int i = 1:mulai dari 1
// - i <= 5 = selama i kurang dari/sama 5
// - i++ = naikan i setiap langkah

// While loop
// Dipakai saat kondisi harus dicek dulu sebelum menjalankan blok.
// Comtoh:
int main() {
    int i = 1;
    while (i <= 5) {
        cout << "Angka: " << i << endl;
        i++;
    }
    return 0;
}

// Do-While loop
// Jalankan dulu, baru cek kondisi (pasti jalan minimal 1x).
// Contoh:

int main() {
    int i = 1;
    do {
        cout << "Cetak ke-" << i << endl;
        i++;
    } while (i <= 5);
    return 0;
}

