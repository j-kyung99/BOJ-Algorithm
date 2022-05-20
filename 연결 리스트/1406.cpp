#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main(void) {
	list<char> L;
	string s1;
	int n;
	cin >> s1;
	for (auto c : s1) L.push_back(c);
	auto cursor = L.end();
	cin >> n;
	for (int i = 0; i < n; i++) {
		char plus;
		cin >> plus;
		if (plus == 'L') {
			if (cursor != L.begin()) {
				cursor--;
			}
		}
		else if (plus == 'D') {
			if (cursor != L.end()) {
				cursor++;
			}
		}
		else if (plus == 'B') {
			if (cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
		else {
			char a;
			cin >> a;
			L.insert(cursor, a);
		}
	}
	for (auto c : L) cout << c;
}
