#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int n;
	string s1, s2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a[26] = { 0 };
		cin >> s1 >> s2;
		for (auto c : s1) a[c - 'a']++;
		for (auto c : s2) a[c - 'a']--;

		bool isPossible = true;

		for (int i : a) {
			if (i != 0) isPossible = false;
		}

		if (isPossible) cout << "Possible\n";
		else cout << "Impossible\n";
	}
}