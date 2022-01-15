#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

string a = "DCBAE";

int main(void) {
	int input;

	for (int t = 0; t < 3; t++) {
		int result = 0;
		for (int i = 0; i < 4; i++) {
			cin >> input;
			result += input;
		}
		cout << a[result] << '\n';
	}
}