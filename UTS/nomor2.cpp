#include <iostream>
using namespace std;

int main() {
     int n;
    int sum = 0;

    cout << "Masukkan angka: ";
    cin >> n;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Jumlah digit: " << sum << endl;

    return 0;
}