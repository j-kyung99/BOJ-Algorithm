#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	long long a, b;
	long long count;
	cin >> a >> b;
	if (a > b) swap(a, b);
	if (a == b) cout << 0;
	else {
		count = b - a - 1;
		cout << count << '\n';
		for (long long i = a + 1; i < b; i++) {
			cout << i << " ";
		}
	}
}
