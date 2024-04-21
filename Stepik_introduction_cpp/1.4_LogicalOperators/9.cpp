// Шахматный ферзь ходит по диагонали, горизонтали или вертикали.
//  Даны две различные клетки шахматной доски,
//   определите, может ли ферзь попасть с первой клетки на вторую одним ходом.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x_start, y_start, x_end, y_end;
    cin >> x_start >> y_start >> x_end >> y_end;

    if ((abs(x_end - x_start) == abs(y_end - y_start)) ||
        (x_start == x_end || y_start == y_end)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}