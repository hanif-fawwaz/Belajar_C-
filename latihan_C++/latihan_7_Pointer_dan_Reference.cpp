#include <iostream>
using namespace std;

// void tukar(int* a) {
//     *a = 100;
// }

// void tukar(int& b) {
//     b = 20;
// }

// int main() {
//     int angka1 = 50;
//     tukar(&angka1); // Pointer
//     cout << "Angka diubah dengan Pointer: " << angka1 << endl;
// }

void ubah(int* a) {
    *a = 100;
}

int main() {
    int nilai = 50;
    ubah(&nilai);
    cout << "Nilai setelah fungsi: " << nilai << endl;
}
