// Шахматный король ходит по горизонтали, вертикали и диагонали, но только на 1 клетку.
// Даны две различные клетки шахматной доски, определите,
// может ли король попасть с первой клетки на вторую одним ходом.

#include <iostream>

using namespace std;

int main(void) {
    int x_start, y_start, x_end, y_end;
    cin >> x_start >> y_start >> x_end >> y_end;

    if ((x_end == x_start-1 && y_end == y_start-1) ||
        (x_end == x_start-1 && y_end == y_start) ||
        (x_end == x_start-1 && y_end == y_start+1) ||
        (x_end == x_start && y_end == y_start-1) ||
        (x_end == x_start && y_end == y_start+1) ||
        (x_end == x_start+1 && y_end == y_start-1) ||
        (x_end == x_start+1 && y_end == y_start) ||
        (x_end == x_start+1 && y_end == y_start+1)) {
            cout << "YES";
        } else {
            cout << "NO";
        }

    return 0;
}