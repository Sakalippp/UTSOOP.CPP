#include <iostream>
using namespace std;

// Definisi kelas Tabung
class Tabung {
    // Property
    public:
        double jariJari;
        double tinggi;

    public:
        // Konstruktor
        Tabung(double jariJari = 0, double tinggi = 0) {
            Tabung::jariJari = jariJari;
            Tabung::tinggi = tinggi;
        }

        // Method untuk menampilkan informasi tabung
        void tampilkanInfo() {
            cout << "Info Tabung" << endl << endl;
            cout << "Jari Jari : " << Tabung::jariJari << " cm." << endl;
            cout << "Tinggi \t  : " << Tabung::tinggi << " cm." << endl;
            cout << "--------------------" << endl << endl;
        }

        // Metode untuk menghitung volume tabung
        void hitungVolume() {
            double volume = 3.14 * (jariJari * jariJari) * tinggi;
            cout << "Rumus menghitung volume tabung adalah 3.14 x jari jari x jari jari x tinggi." << endl;
            cout << "Volume Tabung : " << volume << "cm^3." << endl << endl;
        }

        // Metode untuk menghitung luas permukaan tabung
        void hitungLuasPermukaan() {
            double luasPermukaan = 2 * 3.14 * jariJari * (jariJari + tinggi);
            cout << "Rumus menghitung Luas Permukaan Tabung adalah 2 x 3.14 x jari jari (jari jari + tinggi)." << endl;
            cout << "Luas Permukaan Tabung : " << luasPermukaan << "cm^2." << endl;
        }
};

int main() {
    // Membuat objek tabung
    Tabung tabung(3, 8);

    // Menampilkan informasi jari jari dan tinggi tabung
    tabung.tampilkanInfo();

    // Menampilkan informasi rumus menghitung volume tabung dan hasil perhitungan
    tabung.hitungVolume();

    // Menampilkan informasi rumus menghitung luas permukaan tabung dan hasil perhitungan
    tabung.hitungLuasPermukaan();
}