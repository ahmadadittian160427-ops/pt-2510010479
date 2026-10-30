// SiNilai v0.1: data satu mahasiswa.
// Program membaca nama, NPM, dan empat komponen nilai, lalu menampilkannya sebagai kartu.
// Lengkapi bagian TODO. Versi ini belum menghitung apa-apa; itu tugas Pertemuan 3.
#include <iostream>
#include <string>

using namespace std;

int main() {
    // TODO 1: deklarasikan variabel untuk nama dan NPM.
    //         Nama bisa lebih dari satu kata. NPM adalah deretan angka yang tidak pernah
    //         dihitung, dan bisa diawali 0, jadi pikirkan tipe yang tepat.
    string nama_mahasiswa = "Ahmad Adittian";
    string npm_mahasiswa = "2510010479";

    // TODO 2: deklarasikan empat variabel nilai: kehadiran, mingguan, uts, uas.
    //         Nilai bisa berisi pecahan seperti 85.5.
    double nilai_kehadiran = 85.5;
    double nilai_mingguan = 90.0;
    double nilai_uts = 80.5;
    double nilai_uas = 88.5;

    cout << "=== SiNilai v0.1 ===\n";
    // TODO 3: baca nama. Ingat, nama bisa mengandung spasi.
    cout << "Nama      : ";
    getline(cin, nama_mahasiswa);

    // TODO 4: baca NPM.
    cout << "NPM       : ";
    cin >> npm_mahasiswa;

    // TODO 5: baca keempat komponen nilai, satu per satu, dengan prompt seperti di atas.
    cout << "Nilai Kehadiran : ";
    cin >> nilai_kehadiran;

    cout << "Nilai Mingguan  : ";
    cin >> nilai_mingguan;

    cout << "Nilai UTS       : ";
    cin >> nilai_uts;

    cout << "Nilai UAS       : ";
    cin >> nilai_uas;

    cout << "\n--- Kartu Data Mahasiswa ---\n";
    // TODO 6: tampilkan semua data yang tadi dibaca, satu baris per data, rata seperti prompt.
    cout << "Nama            : " << nama_mahasiswa << endl;
    cout << "NPM             : " << npm_mahasiswa << endl;
    cout << "Kehadiran       : " << nilai_kehadiran << endl;
    cout << "Nilai Mingguan  : " << nilai_mingguan << endl;
    cout << "Nilai UTS       : " << nilai_uts << endl;
    cout << "Nilai UAS       : " << nilai_uas << endl;
    return 0;
}
