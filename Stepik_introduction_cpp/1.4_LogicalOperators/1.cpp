// Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.

#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;

    if (a > b) {
        cout << a;
    } else if (a < b) {
        cout << b;
    } else {
        cout << a;
    }

    return 0;
}