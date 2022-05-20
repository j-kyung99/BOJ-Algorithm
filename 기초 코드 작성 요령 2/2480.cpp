#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int a[3];
	int count = 0;
	int num, money;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + 3);
	if (a[0] == a[1]) {
		num = a[0];
		count++;
	}
	if (a[0] == a[2]) {
		num = a[0];
		count++;
	}
	if (a[1] == a[2]) {
		num = a[1];
		count++;
	}

	if (count == 0) {
		money = a[2] * 100;
	}
	else if (count == 1) {
		money = 1000 + (num * 100);
	}
	else {
		money = 10000 + (num * 1000);
	}
	printf("%d", money);
}
