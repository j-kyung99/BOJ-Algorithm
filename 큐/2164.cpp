#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(void) {
	queue<int> card;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		card.push(i);
	}
	for (int i = 1; i < n; i++) {
		int k;
		card.pop();
		k = card.front();
		card.push(k);
		card.pop();
	}
	cout << card.front();
}
