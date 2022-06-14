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
	int t;
	stack<char> vps;
	string s;
	int count = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			if (vps.empty() && s[j] == ')') {
				vps.push(s[j]);
				break;
			}
			else {
				if (vps.empty()) {
					vps.push(s[j]);
				}
				else {
					if (vps.top() == '(' && s[j] == ')') {
						vps.pop();
					}
					else {
						vps.push(s[j]);
					}
				}
			}
		}
		if (vps.empty()) cout << "YES\n";
		else {
			cout << "NO\n";
			while (!vps.empty()) {
				vps.pop();
			}
		}
	}
}
