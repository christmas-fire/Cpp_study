// Шахматный слон ходит по диагонали.
//  Даны две различные клетки шахматной доски,
//   определите, может ли слон попасть с первой клетки на вторую одним ходом.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x_start, y_start, x_end, y_end;
    cin >> x_start >> y_start >> x_end >> y_end;

    if ((abs(x_end - x_start) == abs(y_end - y_start))) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}