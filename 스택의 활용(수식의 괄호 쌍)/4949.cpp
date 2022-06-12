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

	while (1) {
		getline(cin, mun);
		if (mun == ".") break;
		stack<char> s;
		bool b = true;
		for (int i = 0; i < mun.size(); i++) {
			if (mun[i] == '(' || mun[i] == '[') s.push(mun[i]);
			else if (mun[i] == ')') {
				if (s.empty() || s.top() != '(') {
					b = false;
					break;
				}
				s.pop();
			}
			else if (mun[i] == ']') {
				if (s.empty() || s.top() != '[') {
					b = false;
					break;
				}
				s.pop();
			}
		}
		if (!s.empty()) b = false;
		if (b) cout << "yes\n";
		else cout << "no\n";
	}
}
