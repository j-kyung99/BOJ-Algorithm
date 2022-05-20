#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int num[9];
	int result[7];
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}
	for (int a = 0; a < 8; a++) {
		int total = 0;
		for (int b = a + 1; b < 9; b++) {
			total = 0;

			for (int c = 0, i = 0; c < 9; c++) {
				if (c != a && c != b) result[i++] = num[c];
			}
			for (int i = 0; i < 7; i++) total += result[i];
			if (total == 100) break;
		}
		if (total == 100) break;
	}
	sort(result, result + 7);
	for (int i = 0; i < 7; i++) cout << result[i] << '\n';
}
