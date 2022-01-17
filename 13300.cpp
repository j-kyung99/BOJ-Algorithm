#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int girl[7] = { 0 };
int boy[7] = { 0 };

int main(void) {
	int n, k, s, y;
	int sum = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> s >> y;
		if (s == 0) {
			girl[y]++;
		}
		else boy[y]++;
	}
	for (int i = 1; i < 7; i++) {
		if (girl[i] % k == 0) {
			sum += girl[i] / k;
		}
		else {
			sum += girl[i] / k + 1;
		}
		if (boy[i] % k == 0) {
			sum += boy[i] / k;
		}
		else {
			sum += boy[i] / k + 1;
		}
	}
	cout << sum;
}