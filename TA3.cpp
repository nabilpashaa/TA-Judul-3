#include <iostream>
using namespace std;

int main() {
    int n, cari, posisi = -1;

    cout << "Masukkan banyak nilai: ";
    cin >> n;

    int data[n];
    cout << "Masukkan nilai:\n";
    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout << "\nMasukkan nilai yang ingin dicari: ";
    cin >> cari;

    for (int i = 0; i < n; i++) {
        if (data[i] == cari) {
            posisi = i;  
            break;       
        }
    }

    if (posisi != -1)
        cout << "\nNilai ditemukan pada indeks ke-" << posisi << endl;
    else
        cout << "\nNilai tidak ditemukan dalam array.\n";

    return 0;
}
