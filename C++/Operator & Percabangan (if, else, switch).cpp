// Operator Aritmatika
// contoh
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    cout << "a + b = " << a + b << endl; // Penjumlahan
    cout << "a - b = " << a - b << endl; // Pengurangan
    cout << "a * b = " << a * b << endl; // Perkalian
    cout << "b / a = " << b / a << endl; // Pembagian
    cout << "b % a = " << b % a << endl; // Modulus

    // Operator Perbandingan
    cout << "a == b: " << (a == b) << endl; // Sama dengan
    cout << "a != b: " << (a != b) << endl; // Tidak sama dengan
    cout << "a < b: " << (a < b) << endl;   // Kurang dari
    cout << "a > b: " << (a > b) << endl;   // Lebih dari
    cout << "a <= b: " << (a <= b) << endl; // Kurang dari atau sama dengan
    cout << "a >= b: " << (a >= b) << endl; // Lebih dari atau sama dengan

    return 0;
}

// Operator Logika
// contoh
#include <iostream>
using namespace std;
int main() {
    bool x = true, y = false;
    cout << "x && y: " << (x && y) << endl; // AND
    cout << "x || y: " << (x || y) << endl; // OR
    cout << "!x: " << (!x) << endl;         // NOT

    return 0;
}

// Percabangan (if, else, else if)
// struktur dasar
#include <iostream>

using namespace std;
int main() {
    int kondisi;
    int kondisi_lain;
    if (kondisi) {
        // jika benar
    } else if (kondisi_lain) {
        // jika kondisi lain
    } else {
        // Jika semua salah
    }
}

// contoh penerapan
#include <iostream>
using namespace std;
int main() {
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 90) {
        cout << "Nilai A";
    } else if (nilai >= 80) {
        cout << "Nilai B";
    } else if (nilai >= 70) {
        cout << "Nilai C";
    } else {
        cout << "Nilai D";
    }
}

// switch case (alternatif if else untuk pilihan tetap)
#include <iostream>
using namespace std;

int main() {
    int pilihan;
    cout << "Pilih menu:\n1. Lihat Profil\n2. Keluar\n";
    cout << "Pillihan: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Menampilakn Profil...";
            break; // Keluar dari switch setelah case 1
        case 2:
            cout << "Keluar dari Program";
            break; // Keluar dari switch setelah case 2
        default:
        cout << "Pilihan tidak valid";
    }
}

