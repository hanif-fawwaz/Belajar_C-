#include <iostream>
using namespace std;

struct buku {
    string judul;
    string penulis;
    int tahun_terbit;
};

int main() {
    buku m1;
    m1.judul = "Hanif jadi Orang Sukses";
    m1.penulis = "Hanif Arib";
    m1.tahun_terbit = 2025;

    cout << "Judul: " << m1.judul;
    cout << "Penulis: " << m1.penulis;
    cout << "Tahun Terbit: " << m1.tahun_terbit;
}