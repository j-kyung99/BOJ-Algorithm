#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>

using namespace std;

string mun;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	stack<char> good;
	string s;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (good.empty()) good.push(s[j]);
			else {
				if (!good.empty() && good.top() == s[j]) {
					good.pop();
				}
				else {
					good.push(s[j]);
				}
			}
		}
		if (good.empty()) count++;
		else {
			while (!good.empty()) {
				good.pop();
			}
		}
	}
	cout << count;
}
