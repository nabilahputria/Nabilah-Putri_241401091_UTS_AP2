#include <iostream>
using namespace std;

int main() {
    int kode1, kode2, kode3;

    // Input tiga kode
    cout << "kode ke-1: ";
    cin >> kode1;

    cout << "kode ke-2: ";
    cin >> kode2;

    cout << "kode ke-3: ";
    cin >> kode3;

    // Cek kondisi
    int total = kode1 + kode2 + kode3;

    if (total >= 200 && kode1 >= 50 && kode2 >= 50 && kode3 >= 50) {
        cout << "Aman" << endl;
    } else {
        cout << "Bahaya" << endl;
    }

    return 0;
}