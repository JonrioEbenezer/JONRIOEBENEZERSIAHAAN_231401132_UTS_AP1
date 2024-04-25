#include <iostream>
using namespace std;
int main()
{
    int i, j, number;
    int bilangan = 1;

    cout << "Masukkan angka: ";
    cin >> number;

    for (i = 1; i <= number; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << bilangan << " ";
            bilangan++;
        }
        cout << endl;
    }
}
