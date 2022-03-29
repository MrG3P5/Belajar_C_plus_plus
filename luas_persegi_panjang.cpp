#include <iostream>

using namespace std;

void print_banner() {
    cout << R"( ____                          _   ____              _                   
|  _ \ ___ _ __ ___  ___  __ _(_) |  _ \ __ _ _ __  (_) __ _ _ __   __ _ 
| |_) / _ \ '__/ __|/ _ \/ _` | | | |_) / _` | '_ \ | |/ _` | '_ \ / _` |
|  __/  __/ |  \__ \  __/ (_| | | |  __/ (_| | | | || | (_| | | | | (_| |
|_|   \___|_|  |___/\___|\__, |_| |_|   \__,_|_| |_|/ |\__,_|_| |_|\__, |
                         |___/                    |__/             |___/)" << "\n\n";
}

int rumus (int panjang, int lebar) {
    int hasil;
    hasil = panjang * lebar;
    return hasil;
}

int main() {
    print_banner();
    int input_panjang, input_lebar, hasil_jumlah;
    cout << "Masukan Panjang : ";
    cin >> input_panjang;
    cout << "Masukan Lebar   : ";
    cin >> input_lebar;
    hasil_jumlah = rumus(input_panjang, input_lebar);
    cout << "Hasil           : " << hasil_jumlah;
    return 0;
}
