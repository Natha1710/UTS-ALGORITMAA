#include <iostream>
using namespace std;

float penjumlahan(float a, float b) {
    return a + b;
}

float pengurangan(float a, float b) {
    return a - b;
}

float perkalian(float a, float b) {
    return a * b;
}

float pembagian(float a, float b) {
    if (b == 0) {
        cout << "Error: Pembagian dengan nol tidak valid ";
        return 0;
    }
    return a / b;
}

void kalkulator() {
    int pilihan;
    float angka1, angka2, hasil;
    bool running = true;

    do {
        cout << "Kalkulator Sederhana" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih operasi : ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 4) {
            cout << "Masukkan angka pertama: ";
            cin >> angka1;
            cout << "Masukkan angka kedua: ";
            cin >> angka2;
        }

        switch (pilihan) {
            case 1:
                hasil = penjumlahan(angka1, angka2);
                cout << "Hasil Penjumlahan: " << hasil << endl;
                break;
            case 2:
                hasil = pengurangan(angka1, angka2);
                cout << "Hasil Pengurangan: " << hasil << endl;
                break;
            case 3:
                hasil = perkalian(angka1, angka2);
                cout << "Hasil Perkalian: " << hasil << endl;
                break;
            case 4:
                hasil = pembagian(angka1, angka2);
                if (angka2 != 0) {
                    cout << "Hasil Pembagian: " << hasil << endl;
                }
                break;
            case 5:
                cout << " ";
                running = false;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi";
        }
    } while (running);
}

            int main() {
                kalkulator();
                return 0;
}

