#include <iostream>
using namespace std;

class PersegiPanjang {
    // Property
    public:
        double panjang;
        double lebar;

    public:
        // Konstruktor
        PersegiPanjang(double panjang = 0, double lebar = 0){
            PersegiPanjang::panjang = panjang;
            PersegiPanjang::lebar = lebar;
        }

        // Method untuk menampilkan informasi persegi panjang
        void tampilkanInfo() {
            cout << "Info Persegi Panjang" << endl;
            cout << "Panjang\t : " << PersegiPanjang::panjang << " cm." << endl;
            cout << "Lebar\t : " << PersegiPanjang::lebar << " cm." << endl;
            cout << "Luas\t : " << hitungLuas() << " cm^2." << endl;
            cout << "Keliling : " << hitungKeliling() << " cm." << endl;
            cout << "=====================" << endl << endl;
        }

        // Method untuk menghitung luas
        double hitungLuas() {
            return PersegiPanjang::panjang * PersegiPanjang::lebar;
        }

        // Method untuk menghitung keliling
        double hitungKeliling() {
            return 2 * (PersegiPanjang::panjang + PersegiPanjang::lebar);
        }

        // Method setter
        void setPanjang(double panjang) {
            PersegiPanjang::panjang = panjang;
        }

        void setLebar(double lebar) {
            PersegiPanjang::lebar = lebar;
        }

        // Mehtod getter
        double getPanjang() {
            return PersegiPanjang::panjang;
        }

        double getLebar() {
            return PersegiPanjang::lebar;
        }
};

int main() {
    // Membuat objek persegi panjang
    PersegiPanjang persegiPanjang(12,17);

    // Menampilkan informasi dan hasil perhitungan
    persegiPanjang.tampilkanInfo();

    // Menggunakan setter untuk mengubah panjang dan lebar
    persegiPanjang.setPanjang(7);
    persegiPanjang.setLebar(4);

    // Menampilkan informasi setelah perubahan
    persegiPanjang.tampilkanInfo();

    return 0;
}