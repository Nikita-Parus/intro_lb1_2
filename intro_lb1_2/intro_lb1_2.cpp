#include <iostream>

using namespace std;

string isodd(int num) {
    return (num % 2 == 0 ? " парне" : " непарне");
}

int main()
{
    setlocale(0, ".1251");
    int a, b, c;
    cout << "Введiть цiле число: ";
    cin >> a;
    cout << "Залишок вiд дiлення на 7: " << a % 7 << endl;

    cin >> b >> c;

    cout << ((b % c == 0) ? "Числа дiляться без залишку" : "Числа не дiляться без залишку") << endl;

    cout << "Число " << b << isodd(b) << endl;
    cout << "Число " << c << isodd(c) << endl;
}