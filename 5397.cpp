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
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		list<char> l = {};
		auto cursor = l.end();
		string s;
		cin >> s;
		for(auto a : s){
			if (a == '<') {
				if (cursor != l.begin()) {
					cursor--;
				}
			}
			else if (a == '>') {
				if (cursor != l.end()) {
					cursor++;
				}
			}
			else if (a == '-') {
				if (cursor != l.begin()) {
					cursor--;
					cursor = l.erase(cursor);
				}
			}
			else {
				l.insert(cursor, a);
			}
		}
		for (auto c : l) cout << c;
		cout << "\n";
	}
}