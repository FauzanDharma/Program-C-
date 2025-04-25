
#include <iostream>
#include <string>
using namespace std;

int main() {
    string kata;
    cout << "Masukkan kata = HALLO" << endl;
    cin >> kata;
    if (kata == "HALLO") {
        cout << "Kata yang dimasukkan sesuai" << endl;
    } else {
        cout << "Kata yang dimasukkan tidak sesuai" << endl;
    }
    return 0;
}

