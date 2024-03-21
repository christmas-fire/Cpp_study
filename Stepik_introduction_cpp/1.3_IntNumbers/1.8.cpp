// Сумма цифр трехзначного числа

// Дано целое трехзначное число. Найдите сумму его цифр.

#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
    int s = n / 100;
    int d = (n / 10) % 10;
    int e = n % 10;
	cout << (s + d + e);
	return 0;
}