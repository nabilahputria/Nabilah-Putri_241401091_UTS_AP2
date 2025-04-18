#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    // Cek apakah habis dibagi 7 dan 5
    if (angka % 7 == 0 && angka % 5 == 0) {
        cout << "Angka Ajaib!" << endl;
    } else {
        cout << "Bukan Angka Ajaib!" << endl;
    }

    return 0;
}