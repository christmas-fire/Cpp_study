// Улитка

// Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров, а за ночь спускаясь на B метров.
// На какой день улитка доползет до вершины шеста?

#include <iostream>
using namespace std;

int main(void) {
    int h, a, b;
    cin >> h >> a >> b;

    int days = (h-b)/(a-b);
    days += ((h - b) % (a - b) != 0);

    cout << days;
    return 0;
}