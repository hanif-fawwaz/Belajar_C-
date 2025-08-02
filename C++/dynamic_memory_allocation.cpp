// Apa itu Dyanamic Memory ?
// Dynamic memory allocation memungkinkan kita:
// - Menghalokasikan memori saat program berjalan
// - Menghemat penggunaan memori
// - Digunakan saat kita tidak tahu jumlah data dari awal

// Perintah Penting! :
// - new = untuk membuat memori di heap (di luar stack biasa)
// - delete = untuk menghapus memori tersebut agar tidak bocor

// Contoh Dynamic int :
#include <iostream>
using namespace std;

int main() {
    int* angka = new int; // alokasi satu integer
    *angka = 42;

    cout << "Nilai angka: " << *angka << endl;

    delete angka; // Hapus angka
    return 0;
}

// Penjelasan:
// - new int = membuat memori kosong untuk int
// - *angka = 42; = isi memori itu dengan 42
// - delete angka = penting! jangan lupa hapus untuk mencegah memory leak

// Contoh Dynamic Array :
int main() {
    int n;
    cout << "Berapa banyak elemen? ";
    cin >> n;

    int* data = new int[n]; // array dinamis
    
    for (int i= 0; i < n; i++) {
        cout << "Masukan Nilai ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout << "Data yang dimasukan:\n";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    delete[] data; // Penting: hapus array!
    return 0;
}