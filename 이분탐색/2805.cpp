#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <cmath>

using namespace std;

long long n, m;
long long a[1000005];

int binarys(int end) {
	int start = 0;
	while (start <= end) {
		long long sum = 0;
		int mid = (start + end) / 2;
		for (int i = 0; i < n; i++) {
			if (a[i] > mid) {
				sum += a[i] - mid;
			}
		}
		if (sum >= m) {
			start = mid + 1;
		}
		else end = mid - 1;
	}
	return end;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	cout << binarys(a[n-1]);
}
