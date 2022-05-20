#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <deque>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> d;
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "push_front") {
			int x;
			cin >> x;
			d.push_front(x);
		}
		else if (s == "push_back") {
			int x;
			cin >> x;
			d.push_back(x);
		}
		else if (s == "pop_front") {
			if (d.empty()) cout << -1 << "\n";
			else {
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (d.empty()) cout << -1 << "\n";
			else {
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
		else if (s == "size") {
			cout << d.size() << "\n";
		}
		else if (s == "empty") {
			if (d.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (s == "front") {
			if (d.empty()) cout << -1 << "\n";
			else cout << d.front() << "\n";
		}
		else {
			if (d.empty()) cout << -1 << "\n";
			else cout << d.back() << "\n";
		}
	}
}
