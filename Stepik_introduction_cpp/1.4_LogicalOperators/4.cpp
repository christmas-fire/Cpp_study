// Даны три натуральных числа A, B, C.
// Определите, существует ли треугольник с такими сторонами.
// Если треугольник существует, выведите строку YES, иначе выведите строку NO.
// Треугольник — это три точки, не лежащие на одной прямой.

#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        if (a < b + c) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else if (b >= a && b >= c) {
        if (b < a + c) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        if (c < a + b) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }

    return 0;
}