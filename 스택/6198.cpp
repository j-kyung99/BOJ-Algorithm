#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int h;
	long long sum = 0;
	stack<int> s;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h;
		while (!s.empty()) {
			if (s.top() > h) break;
			s.pop();
		}
		sum += (long long)s.size();
		s.push(h);
	}

	cout << sum;
}
