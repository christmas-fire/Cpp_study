// Последняя цифра

// Дано натуральное число, выведите его последнюю цифру.

#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	cout << (n % 10);
	return 0;
}