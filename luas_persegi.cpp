#include <iostream>

using namespace std;

int rumus_persegi(float sisi_1, float sisi_2) {
    float hasil;
    hasil = sisi_1 * sisi_2;
    return hasil;
}

void print_banner() {
    cout << R"( ____                          _ 
|  _ \ ___ _ __ ___  ___  __ _(_)
| |_) / _ \ '__/ __|/ _ \/ _` | |
|  __/  __/ |  \__ \  __/ (_| | |
|_|   \___|_|  |___/\___|\__, |_|
                         |___/   )" << "\n\n";
}

int main() {
    print_banner();
    float input_sisi_1, input_sisi_2, hasil_hitung;
    cout << "Masukan Sisi 1 : ";
    cin >> input_sisi_1;
    cout << "Masukan Sisi 2 : ";
    cin >> input_sisi_2;
    hasil_hitung = rumus_persegi(input_sisi_1, input_sisi_2);
    cout << "Hasil          : " << hasil_hitung;
    return 0;
}
