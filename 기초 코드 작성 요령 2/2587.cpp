#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int num[5];
	int sum = 0;
	int avg;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		sum += num[i];
	}
	avg = sum / 5;
	sort(num, num + 5);
	cout << avg << '\n' << num[2] << '\n';
}
