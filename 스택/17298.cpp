#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <stack>

using namespace std;

stack<int> s;
int a[1000005];
int b[1000005];
int N;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = N - 1; i >= 0; i--) {
		while (!s.empty() && s.top() <= a[i]) s.pop();
		if (s.empty()) b[i] = -1;
		else b[i] = s.top();
		s.push(a[i]);
	}
	for (int i = 0; i < N; i++) {
		cout << b[i] << " ";
	}
}
