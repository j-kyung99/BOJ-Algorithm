#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <cmath>

using namespace std;

int k, n;
int a[10005];

bool solve(long long x) {
	long long count = 0;
	for (int i = 0; i < k; i++) {
		count += a[i] / x;
	}
	return count >= n;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> a[i];
	}
	long long start = 1;
	long long end = pow(2, 31) - 1;
	while (start < end) {
		long long mid = (start + end + 1) / 2;
		if (solve(mid)) start = mid;
		else end = mid - 1;
	}

	cout << start;
}
