1. Mengubah jumlah detik menjadi jam, menit, dan detik
#include <iostream>
using namespace std;

int main() {
    int total_detik;

    cout << "Masukkan jumlah detik: ";
    cin >> total_detik;

    int jam = total_detik / 3600;
    int sisa = total_detik % 3600;
    int menit = sisa / 60;
    int detik = sisa % 60;

    cout << jam << " jam, "
         << menit << " menit, "
         << detik << " detik" << endl;

    return 0;
}

Jika input:
Masukkan jumlah detik: 3675
Hasil:
1 jam, 1 menit, 15 detik

2. Menampilkan hasil bagi dan sisa
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    int hasil_bagi = a / b;
    int sisa = a % b;

    cout << a << " dibagi " << b
         << " adalah " << hasil_bagi
         << " sisa " << sisa << endl;

    return 0;
}
Input:
Masukkan bilangan pertama: 17
Masukkan bilangan kedua: 5
Output:
17 dibagi 5 adalah 3 sisa 2

3. Mengubah SiNilai v0.2 agar menampilkan selisih nilai akhir dan rerata polos
Misalnya nilai mahasiswa:
- Nilai akhir = 80
- Rerata polos = 80
Maka selisihnya:
80 - 80 = 0
Kapan keduanya sama persis?
Nilai akhir dan rerata polos sama persis ketika nilai akhir dihitung menggunakan nilai yang sama dengan yang digunakan untuk menghitung rerata polos, tanpa tambahan bobot atau pembulatan.
Nilai 1 = 80
Nilai 2 = 80
Nilai 3 = 80
Rerata:
(80 + 80 + 80) / 3 = 80
Nilai akhir juga:
80
Jadi:
Selisih = 80 - 80 = 0

4. Tiga ekspresi dari prioritas.cpp diterjemahkan ke Python
Ekspresi 1
C++:
2 + 3 * 4

Python:
2 + 3 * 4


Hasil C++:
14

Hasil Python:
14

Alasan:
Hasilnya sama karena operator * (perkalian) memiliki prioritas lebih tinggi daripada + (penjumlahan). Jadi perkalian dikerjakan terlebih dahulu:
3 * 4 = 12
2 + 12 = 14

Ekspresi 2
C++:
10 - 4 - 3

Python:
10 - 4 - 3


Hasil C++:
3

Hasil Python:
3

Alasan:
Hasilnya sama karena operasi pengurangan memiliki sifat asosiativitas dari kiri ke kanan.
Jadi:
10 - 4 = 6
6 - 3 = 3

Bukan:
10 - (4 - 3) = 9

Ekspresi 3
C++:
2 / 4 * 3

Python:
2 / 4 * 3


Hasil C++:
0

Hasil Python:
1.5

Alasan:
Nah, ini yang hasilnya berbeda.
Pada C++, 2, 4, dan 3 merupakan bilangan bulat (int). Jadi:
2 / 4 = 0
0 * 3 = 0

Sedangkan pada Python, operator / menghasilkan bilangan desimal:
2 / 4 = 0.5
0.5 * 3 = 1.5

Jadi hasil akhirnya:
C++    = 0
Python = 1.5
Kesimpulan nomor 4
Dari ketiga ekspresi tersebut, ekspresi 2 / 4 * 3 menghasilkan nilai yang berbeda antara C++ dan Python. Penyebabnya bukan karena prioritas operator, tetapi karena cara pembagian bilangan bulat dilakukan berbeda. C++ menggunakan int sehingga 2 / 4 menghasilkan 0, sedangkan Python menggunakan pembagian / yang menghasilkan 0.5.