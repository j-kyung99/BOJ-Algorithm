#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int a[26] = { 0 };

int main(void) {
	string s;
	cin >> s;
	for (auto alpha : s)
		a[alpha - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << a[i] << ' ';
}