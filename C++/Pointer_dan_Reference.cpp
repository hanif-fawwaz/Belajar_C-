// Pointer adalah variabel yang menyimpan alamat memori dari variabel lain.
// Contoh
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x; // pointer menyimpan alamat x

    cout << "Nilai x: " << x << endl;
    cout << "Alamat x: " << &x << endl;
    cout << "Alamat lewat ptr: " << ptr << endl;
    cout << "Nilai lewat ptr: " << *ptr << endl;

    return 0;

    // &x = mengambil alamat dari x
    // int* ptr = pointer ke int
    // *ptr = nilai dari alamat yang ditunjuk
}

void ubah(int* a) {
    *a = 100;
}

int main() {
    int nilai = 50;
    ubah(&nilai);
    cout << "Nilai setelah fungsi: " << nilai << endl;
}

// output : Nilai setelah fungsi : 100

// Reference(&) -- Alternatif Pointer
// Lebih simpel dari pointer, tapi tetap bisa mengubah nilai variabel asli

void ubah(int& a) {
    a = 200;
}

int main() {
    int angka = 75;
    ubah(angka);
    cout << "Angka setelah diubah: " << angka << endl;
}