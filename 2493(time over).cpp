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
	stack<int> t;
	vector<int> v;
	stack<int> a;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		t.push(a);
		v.push_back(a);
	}
	int k = n - 1;
	for (int i = 1; i <= n; i++) {
		int count = 0;
			if (t.top() < v[k-1]) {
				a.push(k-1);
				t.pop();
				k--;
				count = 1;
			}
		if (count == 0) {
			a.push(0);
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << a.top() << ' ';
		a.pop();
	}
}