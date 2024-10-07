#include <iostream>
using namespace std;

int main() {
    int saldo = 1000000;  // Saldo awal
    int jumlahPenarikan;

    cout << "=== ATM Penarikan Uang ===" << endl;
    cout << "Saldo Anda: Rp" << saldo << endl;
    cout << "Masukkan jumlah uang yang ingin ditarik: Rp";
    cin >> jumlahPenarikan;

    if (jumlahPenarikan <= saldo) {
        saldo -= jumlahPenarikan;
        cout << "Penarikan berhasil! Sisa saldo Anda: Rp" << saldo << endl;
    } else {
        cout << "Saldo tidak cukup untuk melakukan penarikan." << endl;
    }

    return 0;
}