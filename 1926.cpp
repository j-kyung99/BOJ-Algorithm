#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#define X first
#define Y second

using namespace std;
int board[502][502];
bool vis[502][502];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	int num = 0; // 그림 개수
	int mx = 0; // 가장 넓은 그림 넓이
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] != 1 || vis[i][j] == 1) continue;
			num++;
			queue<pair<int, int>> Q;
			vis[i][j] = 1;
			Q.push({ i,j });
			int area = 0;
			while (!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop();
				area++;
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (vis[nx][ny] == 1 || board[nx][ny] != 1) continue;
					vis[nx][ny] = 1;
					Q.push({ nx,ny });
				}
			}
			mx = max(mx, area);
		}
	}
	cout << num << '\n' << mx;
}