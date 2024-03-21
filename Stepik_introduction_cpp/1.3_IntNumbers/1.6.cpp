// Первая цифра двузначного числа

// Дано двузначное число. Выведите его первую цифру (число десятков)

#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	cout << (n / 10);
	return 0;
}