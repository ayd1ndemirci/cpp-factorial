#include <iostream>

using namespace std;

int main()
{
    int num, factorial = 1;

    cout << "Faktoriyeli bulunacak sayi: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "Faktoriyel: " << factorial << endl;
}
