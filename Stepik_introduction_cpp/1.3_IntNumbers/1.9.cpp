// Следующее четное

// На вход дается натуральное число N. Выведите следующее за ним четное число

#include <iostream>
using namespace std;

int main(void) {
	int n;
    cin >> n;
    cout << (n - n%2)+2;
	return 0;
}