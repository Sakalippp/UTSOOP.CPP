#include <iostream>
using namespace std;

class RekeningBank {
    // Property
    public:
        string nama;
        string noRekening;
        double saldoRekening;

    public:
        // Konstruktor untuk menginisialisasi objek RekeningBank
        RekeningBank( string nama = "Belum Terdaftar",  string nomorRekening = "Belum Terdaftar", double saldo = 0) {
            RekeningBank::nama = nama;
            RekeningBank::noRekening = nomorRekening;
            RekeningBank::saldoRekening = saldo;
        }

        // Method untuk menambah saldo
        void tambahSaldo(double jumlah) {
            RekeningBank::saldoRekening += jumlah;
            cout << "Setor saldo berhasil. Saldo akhir anda Rp. " << RekeningBank::saldoRekening << ".00" << endl;
        }

        // Method untuk mengurangi saldo
        void kurangiSaldo(double jumlah) {
            if (jumlah <= RekeningBank::saldoRekening) {
                RekeningBank::saldoRekening -= jumlah;
                cout << "Tarik saldo berhasil. Saldo akhir anda Rp. " << RekeningBank::saldoRekening << ".00" << endl << endl;
            } else {
                cout << "Saldo tidak mencukupi untuk melakukan penarikan." << endl << endl;
            }
            cout << "=========================================================" << endl;
        }

        // Method untuk menampilkan informasi rekening
        void tampilkanInformasi() {
            cout << "Informasi Rekening Bank" << endl << endl;
            cout << "Nama Pemilik\t: Yang Mulia " << RekeningBank::nama << endl;
            cout << "Nomor Rekening\t: " << RekeningBank::noRekening << endl;
            cout << "Jumlah Saldo\t: Rp. " << RekeningBank::saldoRekening << ".00" << endl << endl;
        }
};

int main() {
    // Membuat objek RekeningBank
    RekeningBank rekening("Sakalief", "202211020", 2000000);

    // Menampilkan informasi awal rekening
    rekening.tampilkanInformasi();

    // Menambah saldo
    rekening.tambahSaldo(100000);

    // Mengurangi saldo
    rekening.kurangiSaldo(50000);

    // Menampilkan informasi akhir rekening
    rekening.tampilkanInformasi();
}