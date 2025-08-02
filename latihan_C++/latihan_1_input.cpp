#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    string hobby;

    cout << "Nama: ";
    getline(cin, name); // pakai getline agar bisa input dengan spasi

    cout << "Umur: ";
    cin >> age;
    cin.ignore(); // hapus newline sisa dari cin >> age

    cout << "Hobi: ";
    getline(cin, hobby); // pakai getline agar bisa input dengan spasi

    cout << "Halo, " << name << "! Umurmu " << age << " tahun dan hobimu adalah " << hobby << "." << endl;

    return 0;
}