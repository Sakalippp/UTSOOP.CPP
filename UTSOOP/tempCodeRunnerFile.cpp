#include <iostream>
using namespace std;

class Mobil {
    // Property
    public:
        string merek;
        string model;
        int kecepatan;

    public:
        // Konstruktor untuk menginisialisasi mobil
        Mobil(string merek = "Tidak Ada", string model = "Tidak Ada", int kecepatan = 0) {
            Mobil::merek = merek;
            Mobil::model = model;
            Mobil::kecepatan = kecepatan;
        }

        // Method untuk menambah kecepatan mobil
        void tambahKecepatan(int percepat = 0) {
            Mobil::kecepatan += percepat;
            cout << "Mobil menambah laju kecepatan sebesar " << percepat << " Km/Jam." << endl;
            cout << "Laju kecepatan mobil sekarang adalah " << Mobil::kecepatan << " Km/Jam." << endl << endl;
        }

        // Method untuk mengurangi kecepatan mobil
        void kurangiKecepatan(int perlambat = 0) {
            Mobil::kecepatan -= perlambat;
            if (Mobil::kecepatan < 0) {
            Mobil::kecepatan = 0;
            }
            cout << "Mobil memperlambat laju kecepatan sebesar " << perlambat << " Km/Jam." << endl;
            cout << "Laju kecepatan mobil sekarang adalah " << Mobil::kecepatan << " Km/Jam." << endl << endl;
        }

        // Method untuk menampilkan informasi mobil
        void tampilkanInfo() {
            cout << "Informasi Mobil" << endl <<endl;
            cout << "Merek Mobil\t: " << Mobil::merek << "." << endl;
            cout << "Model Mobil\t: " << Mobil::model << "." << endl;
            cout << "Kecepatan Mobil\t: " << Mobil::kecepatan << " Km/Jam." << endl << endl;
        }
};

int main() {
    // Membuat objek mobil
    Mobil mobil("Toyota", "GR.COROLLA", 150);

    // Menampilkan informasi awal mobil
    mobil.tampilkanInfo();

    // Menambah kecepatan mobil
    mobil.tambahKecepatan(20);

    // Mengurangi kecepatan mobil
    mobil.kurangiKecepatan(10);
}