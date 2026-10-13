
#include <iostream>
using namespace std;

int main() {
    double nilai;
    int kelompok;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    kelompok = static_cast<int>(nilai) / 10;

    switch (kelompok) {
        case 10:
        case 9:
            cout << "Nilai A" << endl;
            break;
        case 8:
            cout << "Nilai B" << endl;
            break;
        case 7:
            cout << "Nilai C" << endl;
            break;
        case 6:
            cout << "Nilai D" << endl;
            break;
        default:
            cout << "Nilai E" << endl;
    }

    return 0;
}
