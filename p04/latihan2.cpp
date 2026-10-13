
#include <iostream>
using namespace std;

int main() {
    double A, B, C, terbesar;

    cout << "Masukkan bilangan pertama: ";
    cin >> A;

    cout << "Masukkan bilangan kedua: ";
    cin >> B;

    cout << "Masukkan bilangan ketiga: ";
    cin >> C;

    if (A >= B) {
        if (A >= C) {
            terbesar = A;
        } else {
            terbesar = C;
        }
    } else {
        if (B >= C) {
            terbesar = B;
        } else {
            terbesar = C;
        }
    }

    cout << "Bilangan terbesar adalah: "
         << terbesar << endl;

    return 0;
}
