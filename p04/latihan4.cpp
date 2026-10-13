
#include <iostream>
using namespace std;

int main() {
    char pilihan;

    cout << "=== MENU ===" << endl;
    cout << "1. Pilihan pertama" << endl;
    cout << "2. Pilihan kedua" << endl;
    cout << "3. Pilihan ketiga" << endl;
    cout << "k. Keluar" << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
        case '1':
            cout << "Anda memilih pilihan pertama." << endl;
            break;
        case '2':
            cout << "Anda memilih pilihan kedua." << endl;
            break;
        case '3':
            cout << "Anda memilih pilihan ketiga." << endl;
            break;
        case 'k':
            cout << "Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
