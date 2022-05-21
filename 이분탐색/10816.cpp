#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int n, m;
int A[500005];

int upper_idx(int target, int len) {
	int start = 0;
	int end = len;
	while (start < end) {
		int mid = (start + end) / 2;
		if (A[mid] > target) {
			end = mid;
		}
		else {
			start = mid + 1;
		}
	}
	return start;
}

int lower_idx(int target, int len) {
	int start = 0;
	int end = len;
	while (start < end) {
		int mid = (start + end) / 2;
		if (A[mid] >= target) {
			end = mid;
		}
		else {
			start = mid + 1;
		}
	}
	return start;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	sort(A, A + n);
	//for (int i = 0; i < n; i++) cout << A[i] << ' ';
	cin >> m;
	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;
		cout << upper_idx(b, n) - lower_idx(b, n) << ' ';
	}
}
