// Даны три целых числа. 
// Найдите наибольшее из них (программа должна вывести ровно одно целое число).
// Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.

#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << a;
    } else if (b >= a && b >= c) {
        cout << b;
    } else {
        cout << c;
    }

    return 0;
}