#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Masukkan daftar judul buku: ";
    getline(cin, input); // baca satu baris string

    int i = 0, count = 0;
    bool inWord = false;

    while (i < input.length()) {
        if (input[i] != ' ' && !inWord) {
            inWord = true;
            count++;
        } else if (input[i] == ' ') {
            inWord = false;
        }
        i++;
    }

    cout << "Jumlah judul buku: " << count << endl;
    return 0;
}