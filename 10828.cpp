#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int main(void) {
	stack<int> s;
	int n;
	string m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		if (m == "push") {
			int x;
			cin >> x;
			s.push(x);
		}
		else if (m == "pop") {
			if (s.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (m == "size") {
			cout << s.size() << "\n";
		}
		else if (m == "empty") {
			if (s.empty()) {
				cout << 1 << "\n";
			}
			else cout << 0 << "\n";
		}
		else {
			if (s.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << s.top() << "\n";
			}
		}
	}
}