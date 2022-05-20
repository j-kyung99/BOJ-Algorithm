#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int a;
	int sum = 0;
	int min = 100;

	for (int i = 0; i < 7; i++) {
		cin >> a;
		if (a % 2 == 1) {
			sum += a;
			if (min > a) min = a;
		}
	}
	if (sum == 0) cout << -1;
	else {
		cout << sum << '\n' << min;
	}
}
