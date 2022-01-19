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
	int n, a;
	int num = 1;
	string print;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		while (num <= a) {
			s.push(num);
			num++;
			print += "+\n";
		}
		if (s.top() != a) {
			cout << "NO\n";
			return 0;
		}
		s.pop();
		print += "-\n";
	}
	cout << print;
}