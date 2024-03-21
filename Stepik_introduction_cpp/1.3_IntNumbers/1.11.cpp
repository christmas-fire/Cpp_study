// Покупка пирожков

// Пирожок в столовой стоит A рублей и B копеек.
//  Определите, сколько рублей и копеек нужно заплатить за N пирожков.

#include <iostream>
using namespace std;

int main(void) {
	int a, b, n;
    cin >> a >> b >> n;
    cout << a*n + (b*n / 100) << " " << (b*n) % 100;

	return 0;
}