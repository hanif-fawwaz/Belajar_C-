#include  <iostream>
using namespace std;

class Siswa{
    public:
        string name;
        int nilai;

        void info_siswa() {
            cout << "Nama: " << name << "\n" << "Dengan Nilai: " << nilai;
        };
};

int main() {
    Siswa m1;
    m1.name = "Hanif Arib Fawwaz";
    m1.nilai = 100;
    m1.info_siswa();
}
