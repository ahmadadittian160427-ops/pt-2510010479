
    // SiNilai v0.6: Program laporan nilai kelas
    // Validasi input, perapian nama, dan laporan kelas.

    #include <cctype>
    #include <iomanip>
    #include <iostream>
    #include <string>

    using namespace std;

    int main() {
        const double BOBOT_KEHADIRAN = 0.10;
        const double BOBOT_MINGGUAN = 0.45;
        const double BOBOT_UTS = 0.25;
        const double BOBOT_UAS = 0.20;

        int jumlah_mahasiswa = 0;

        cout << "=== SiNilai v0.6 ===\n";

        // TODO 1: Validasi jumlah mahasiswa
        cout << "Jumlah mahasiswa (paling sedikit 1): ";
        cin >> jumlah_mahasiswa;

        while (cin.fail() || jumlah_mahasiswa < 1) {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Input tidak valid! Masukkan jumlah mahasiswa (minimal 1): ";
            cin >> jumlah_mahasiswa;
        }

        cin.ignore(1000, '\n');

        cout << fixed << setprecision(2);

        double total_nilai = 0;
        int jumlah_lulus = 0;
        int jumlah_a = 0;
        int jumlah_b = 0;
        int jumlah_c = 0;
        int jumlah_d = 0;
        int jumlah_e = 0;

        double nilai_tertinggi = -1;
        string nama_tertinggi;

        for (int i = 1; i <= jumlah_mahasiswa; i++) {
            string nama;
            string npm;

            double kehadiran = 0;
            double mingguan = 0;
            double uts = 0;
            double uas = 0;

            cout << "\n--- Mahasiswa ke-" << i
                << " dari " << jumlah_mahasiswa << " ---\n";

            // TODO 2: Validasi nama mahasiswa
            bool hanya_spasi;
            bool ada_angka;

            do {
                cout << "Nama      : ";
                getline(cin, nama);

                hanya_spasi = true;
                ada_angka = false;

                for (char karakter : nama) {
                    if (!isspace(static_cast<unsigned char>(karakter))) {
                        hanya_spasi = false;
                    }

                    if (isdigit(static_cast<unsigned char>(karakter))) {
                        ada_angka = true;
                    }
                }

                if (nama.empty() || hanya_spasi || ada_angka) {
                    cout << "Nama tidak valid! Nama tidak boleh kosong atau mengandung angka.\n";
                }

            } while (nama.empty() || hanya_spasi || ada_angka);

            // TODO 3: Merapikan nama mahasiswa
            bool awal_kata = true;

            for (size_t i = 0; i < nama.length(); i++) {
                if (isspace(static_cast<unsigned char>(nama[i]))) {
                    awal_kata = true;
                } else {
                    if (awal_kata) {
                        nama[i] = toupper(static_cast<unsigned char>(nama[i]));
                        awal_kata = false;
                    } else {
                        nama[i] = tolower(static_cast<unsigned char>(nama[i]));
                    }
                }
            }

            cout << "NPM       : ";
            getline(cin, npm);

            // TODO 4: Validasi nilai kehadiran
            cout << "Kehadiran : ";
            cin >> kehadiran;

            while (cin.fail() || kehadiran < 0 || kehadiran > 100) {
                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Input tidak valid! Masukkan Kehadiran (0-100): ";
                cin >> kehadiran;
            }

            // TODO 5: Validasi nilai mingguan
            cout << "Mingguan  : ";
            cin >> mingguan;

            while (cin.fail() || mingguan < 0 || mingguan > 100) {
                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Input tidak valid! Masukkan Mingguan (0-100): ";
                cin >> mingguan;
            }

            // Validasi nilai UTS
            cout << "UTS       : ";
            cin >> uts;

            while (cin.fail() || uts < 0 || uts > 100) {
                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Input tidak valid! Masukkan UTS (0-100): ";
                cin >> uts;
            }

            // Validasi nilai UAS
            cout << "UAS       : ";
            cin >> uas;

            while (cin.fail() || uas < 0 || uas > 100) {
                cin.clear();
                cin.ignore(1000, '\n');

                cout << "Input tidak valid! Masukkan UAS (0-100): ";
                cin >> uas;
            }

            cin.ignore(1000, '\n');

            // Menghitung nilai akhir
            double nilai_akhir =
                kehadiran * BOBOT_KEHADIRAN +
                mingguan * BOBOT_MINGGUAN +
                uts * BOBOT_UTS +
                uas * BOBOT_UAS;

            // Menentukan huruf mutu
            string huruf_mutu;

            if (nilai_akhir >= 80) {
                huruf_mutu = "A";
            } else if (nilai_akhir >= 75) {
                huruf_mutu = "B+";
            } else if (nilai_akhir >= 70) {
                huruf_mutu = "B";
            } else if (nilai_akhir >= 65) {
                huruf_mutu = "C+";
            } else if (nilai_akhir >= 60) {
                huruf_mutu = "C";
            } else if (nilai_akhir >= 40) {
                huruf_mutu = "D";
            } else {
                huruf_mutu = "E";
            }

            // Menentukan status kelulusan
            bool lulus = nilai_akhir >= 60;

            cout << "  " << left << setw(20) << nama
                << right << setw(7) << nilai_akhir
                << "  " << left << setw(3) << huruf_mutu;

            if (lulus) {
                cout << "Lulus\n";
            } else {
                cout << "Belum lulus\n";
            }

            // Menghitung total nilai dan jumlah kelulusan
            total_nilai += nilai_akhir;

            if (lulus) {
                jumlah_lulus++;
            }

            // Menghitung jumlah huruf mutu
            switch (huruf_mutu[0]) {
                case 'A':
                    jumlah_a++;
                    break;

                case 'B':
                    jumlah_b++;
                    break;

                case 'C':
                    jumlah_c++;
                    break;

                case 'D':
                    jumlah_d++;
                    break;

                default:
                    jumlah_e++;
            }

            // Menentukan mahasiswa dengan nilai tertinggi
            if (nilai_akhir > nilai_tertinggi) {
                nilai_tertinggi = nilai_akhir;
                nama_tertinggi = nama;
            }
        }

        // Laporan kelas
        cout << "\n=== Laporan Kelas ===\n";
        cout << "Jumlah mahasiswa : " << jumlah_mahasiswa << "\n";
        cout << "Lulus            : " << jumlah_lulus << "\n";
        cout << "Belum lulus      : "
            << jumlah_mahasiswa - jumlah_lulus << "\n";

        cout << "Rata-rata kelas  : "
            << total_nilai / jumlah_mahasiswa << "\n";

        cout << "Tertinggi        : "
            << nama_tertinggi << " (" << nilai_tertinggi << ")\n";

        // Sebaran huruf mutu
        cout << "\nSebaran huruf mutu:\n";

        for (char huruf = 'A'; huruf <= 'E'; huruf++) {
            int banyak = 0;

            if (huruf == 'A') {
                banyak = jumlah_a;
            } else if (huruf == 'B') {
                banyak = jumlah_b;
            } else if (huruf == 'C') {
                banyak = jumlah_c;
            } else if (huruf == 'D') {
                banyak = jumlah_d;
            } else {
                banyak = jumlah_e;
            }

            cout << huruf << " | ";

            for (int j = 1; j <= banyak; j++) {
                cout << "#";
            }

            cout << " " << banyak << "\n";
        }

        return 0;
    }
