// array adalah variabel yang menyimpan kumpulan data sejenis
// contoh:
// int nilai[5] = {40, 50, 60, 70, 80};

// Deklarasi array
// tanpa isi awal:
// int nilai[1];

// Dengan isi langsung:
// int angka[3] = {10, 20, 30};

// contoh
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int nilai[5];
    // input
    for (int i = 0; i < 5; i++) {
        cout << "Masukan nilai ke-" << i+1 << ": ";
        cin >> nilai[1];
    }

    // Output

    cout << "\nNilai yang dimasukan:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << i+1 << ": " << nilai[i] << endl;
    }

    return 0;
}

// int 


// Vektor
int main() {
    vector<int> angka;

    angka.push_back(10);
    angka.push_back(20);
    angka.push_back(30);

    cout << "Isi vektor:\n";
    for (int i = 0; i < angka.size(); i++) {
        cout << angka[i] << endl;
    }
}