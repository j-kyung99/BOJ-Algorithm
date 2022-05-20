#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int a[26] = { 0 };
	int b[26] = { 0 };
	int sum = 0;
	string s1, s2;
	cin >> s1;
	for (auto c : s1) a[c - 'a']++;
	cin >> s2;
	for (auto c : s2) b[c - 'a']++;
	for (int i = 0; i < 26; i++) {
		if (a[i] - b[i] < 0) {
			sum += -(a[i] - b[i]);
		}
		else sum += a[i] - b[i];
	}
	cout << sum;
}
