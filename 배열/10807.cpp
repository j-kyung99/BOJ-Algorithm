#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int num[205] = { 0 };

int main(void) {
	int n, a, v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		num[a + 100]++;
	}
	cin >> v;
	cout << num[v + 100];
}
