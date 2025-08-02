#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int umur;
    cout << "Masukkan umur: ";
    cin >> umur;
    if (umur <= 12) {
        cout << "Anda masih anak-anak.";
    } else if (umur <= 17) {
        cout << "Anda Remaja.";
    } else if (umur <= 60) {
        cout << "Anda Dewasa.";
    } else {
        cout << "Anda Lansia.";
    }
}