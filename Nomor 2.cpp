#include <iostream>
using namespace std;

int main() {
    int kode;

    cout << "Masukkan kode: ";
    cin >> kode;

    // Cek apakah 3 digit (antara 100 hingga 999)
    if (kode >= 100 && kode <= 999) {
        int digit1 = kode / 100;              // ratusan
        int digit2 = (kode / 10) % 10;        // puluhan
        int digit3 = kode % 10;               // satuan

        int jumlah = digit1 + digit2 + digit3;

        cout << "Jumlah digit: " << jumlah << endl;
    } else {
        cout << "Kode Salah!" << endl;
    }

    return 0;
}