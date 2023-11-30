#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class CatatanAkademik {
public:
    string nama;
    string NIM;
    vector<pair<string, int>> daftarMataKuliah;

public:
    // Konstruktor untuk inisialisasi objek CatatanAkademik
    CatatanAkademik(string nama = "Tidak Terdaftar", string NIM = "Tidak Terdaftar") {
        CatatanAkademik::nama = nama;
        CatatanAkademik::NIM = NIM;
    }

    // Method untuk menambah mata kuliah
    void tambahMataKuliah(string namaMataKuliah, int nilai) {
        daftarMataKuliah.push_back(make_pair(namaMataKuliah, nilai));
    }

    // Method untuk menghapus mata kuliah berdasarkan nama
    void hapusMataKuliah(string namaMataKuliah) {
        auto it = remove_if(daftarMataKuliah.begin(), daftarMataKuliah.end(),
                            [namaMataKuliah](const pair<string, int>& mk) {
                                return mk.first == namaMataKuliah;
                            });

        if (it != daftarMataKuliah.end()) {
            daftarMataKuliah.erase(it, daftarMataKuliah.end());
            cout << "Mata kuliah '" << namaMataKuliah << "' dihapus." << endl;
        } else {
            cout << "Mata kuliah '" << namaMataKuliah << "' tidak ditemukan." << endl;
        }
    }

    // Method untuk menghitung nilai rata-rata mata kuliah
    double hitungRataRata() const {
        if (daftarMataKuliah.empty()) {
            cout << "Belum ada mata kuliah." << endl << endl;
            return 0.0;
        }

        int totalNilai = 0;
        for (const auto& mk : daftarMataKuliah) {
            totalNilai += mk.second;
        }

        return static_cast<double>(totalNilai) / daftarMataKuliah.size();
    }

    // Method untuk menampilkan catatan akademik mahasiswa
    void tampilkanCatatanAkademik() const {
        cout << "=============================\n" << endl;
        cout << "Catatan Akademik Mahasiswa" << endl << endl;
        cout << "Nama Mahasiswa: " << CatatanAkademik::nama << endl;
        cout << "Nomor Induk: " << CatatanAkademik::NIM << endl << endl;

        if (daftarMataKuliah.empty()) {
            cout << "Belum ada mata kuliah." << endl;
        } else {
            cout << "Daftar Mata Kuliah:" << endl;
            for (const auto& mk : daftarMataKuliah) {
                cout << "- " << mk.first << ": " << mk.second << endl;
            }
            cout << "Rata-rata nilai: " << hitungRataRata() << endl << endl;
        }
    }
};

int main() {
    // Membuat objek CatatanAkademik
    CatatanAkademik catatan("Saka Nur Alief", "202211020");

    // Menambahkan mata kuliah
    catatan.tambahMataKuliah("Webpro", 99);
    catatan.tambahMataKuliah("Desmud", 98);

    // Menampilkan catatan akademik
    catatan.tampilkanCatatanAkademik();

    // Menambahkan mata kuliah baru
    catatan.tambahMataKuliah("Ai", 96);

    // Menampilkan catatan akademik setelah perubahan
    catatan.tampilkanCatatanAkademik();

    // Menghapus mata kuliah
    catatan.hapusMataKuliah("Basis Data");

    // Menampilkan catatan akademik setelah perubahan
    catatan.tampilkanCatatanAkademik();

    return 0;
}