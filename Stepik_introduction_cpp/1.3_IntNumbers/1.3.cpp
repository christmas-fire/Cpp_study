// Белочки и орешки - 1

// N белочек нашли K орешков и решили разделить их поровну.
//  Определите, сколько орешков достанется каждой белочке.

#include <iostream>
using namespace std;

int main(void) {
	int n;
	int k;
	cin >> n >> k;
	cout << (k / n);
	return 0;
}