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
	long long k;
	long long num;
	long long sum = 0;
	cin >> k;
	for (long long i = 0; i < k; i++) {
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}
	long long size = s.size();
	for (long long i = 0; i < size; i++) {
		sum += s.top();
		s.pop();

	}
	cout << sum;
}
