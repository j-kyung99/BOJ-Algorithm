#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int num[9] = { 0 };

int main(void) {
	int n;
	int ans = 0;
	cin >> n;
	while (n > 0) {
		if (n % 10 == 9) {
			num[6]++;
		}
		else num[n % 10]++;
		n = n / 10;
	}
	if (num[6] % 2 == 0) num[6] = num[6] / 2;
	else num[6] = num[6] / 2 + 1;

	for (int i = 0; i < 9; i++) {
		ans = max(ans, num[i]);
	}
	cout << ans;
}