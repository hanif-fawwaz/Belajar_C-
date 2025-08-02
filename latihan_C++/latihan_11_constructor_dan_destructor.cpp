#include <iostream> 
using namespace std;

class Produk {
    public:
        string nama;
        float harga;
    Produk(string n, float a) {
        nama = n;
        harga = a;
        cout << "Nama Barang: " << nama << "dibuat\n";
    }

    ~Produk() {
        cout << "Nama Barang: " << nama << "dihancurkan\n";
    }

    void infoharga() {
        cout << nama << " Harga = " << harga << "\n";
    }
    
};

int main() {
    Produk m1("Daia sacet", 2.000);
    m1.infoharga();
    Produk* ptr = new Produk("soklin", 3.500);
    ptr ->infoharga();
    delete ptr;
    return 0;
}