#include <iostream>
#include <cstdlib>

using namespace std;

int bot_dadu() {
    int y;
    y = 1 + rand() % 6;
    return y;
}

int player_dadu() {
    int a;
    a = 1 + rand() % 6;
    return a;
}

void itung_hasil(int a, int b) {
    if (a > b) {
        cout << "Kamu Menang";
    } else if (a < b) {
        cout << "Kamu Kalah:(";
    } else if (a == b) {
        cout << "Seri!";
    }
}

void print_banner() {
    cout << R"(  ____                         ____            _       
 / ___| __ _ _ __ ___   ___   |  _ \  __ _  __| |_   _ 
| |  _ / _` | '_ ` _ \ / _ \  | | | |/ _` |/ _` | | | |
| |_| | (_| | | | | | |  __/  | |_| | (_| | (_| | |_| |
 \____|\__,_|_| |_| |_|\___|  |____/ \__,_|\__,_|\__,_|)";
    cout << "\n\n";
}

int main() {
    char pilih;
    print_banner();
    while (true) {
        cout << "Mau Bermain? (y/n) : ";
        cin >> pilih;

        switch (pilih) {
            case 'y':
                int bot, player;
                bot = bot_dadu();
                player = player_dadu();
                cout << "Kamu  : " << player << "\n";
                cout << "Bot   : " << bot << "\n";
                cout << "Hasil : ";
                itung_hasil(player, bot);
                cout << "\n\n";
                break;
            case 'n':
                cout << "Makasih Sudah Bermain";
                return 0;
            default:
                cout << "Warning: Pilih y atau n kakak!" << endl;
                break;
        }
    }
    return 0;
}
