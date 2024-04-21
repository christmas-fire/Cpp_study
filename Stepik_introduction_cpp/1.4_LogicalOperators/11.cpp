// Шоколадка имеет вид прямоугольника, разделенного на N×M долек.
//  Шоколадку можно один раз разломить по прямой на две части.
//   Определите, можно ли таким образом отломить от шоколадки ровно K долек.

#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    if (((k % n == 0) && k < m*n) || ((k % m == 0) && k < m*n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}