#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int a[3];

	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + 3);
	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}
}