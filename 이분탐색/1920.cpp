#pragma warning(disable:4996)
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int n, m;
int A[100005];

int binarys(int target) {
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (A[mid] > target) {
			end = mid - 1;
		}
		else if (A[mid] < target) {
			start = mid + 1;
		}
		else {
			return 1;
		}
	}
	return 0;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	sort(A, A + n);
	//for (int i = 0; i < n; i++) cout << A[i];
	cin >> m;
	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;
		cout << binarys(b) << '\n';
	}
}
