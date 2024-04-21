// Шахматный конь ходит буквой “Г” — на две клетки по вертикали
//  в любом направлении и на одну клетку по горизонтали, или наоборот.
//   Даны две различные клетки шахматной доски, определите,
//    может ли конь попасть с первой клетки на вторую одним ходом.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x_start, y_start, x_end, y_end;
    cin >> x_start >> y_start >> x_end >> y_end;

    if ((abs(x_end - x_start) == 2 && abs(y_end - y_start) == 1) ||
        (abs(x_end - x_start) == 1 && abs(y_end - y_start) == 2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}