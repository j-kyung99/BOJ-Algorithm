#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int n;
	int tel[20];
	int ysum = 0;
	int msum = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tel[i];
	}
	for (int i = 0; i < n; i++) {
		ysum += (tel[i] / 30 + 1) * 10;
		msum += (tel[i] / 60 + 1) * 15;
	}
	if (ysum == msum) {
		cout << "Y " << "M " << ysum;
	}
	else {
		if (ysum < msum) {
			cout << "Y " << ysum;
		}
		else cout << "M " << msum;
	}
}