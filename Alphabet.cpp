#include <iostream> 
#include <algorithm>
using namespace std; 

char gra[21][21] = { 0 };

int dx[4] = { 1, -1 , 0, 0 };
int dy[4] = { 0 , 0 , 1 , -1 };

int R, C; 
int res;
int alpha[26] = { 0 };

void dfs(int x, int y, int cnt) {
	res = max(res, cnt);
	
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i]; 
		int ny = y + dy[i];

		if (nx < 0 || ny < 0 || nx >= R || ny >= C)
			continue;

		int k = (int)gra[nx][ny] - 65;

		if (alpha[k] == 1)
			continue;

		alpha[k] = 1; 
		dfs(nx, ny, cnt + 1);
	
		alpha[k] = 0;
	}

}

int main() {

	cin >> R >> C; 

	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			cin >> gra[i][j];

	alpha[gra[0][0] - 65] = 1;

	dfs(0, 0, 1);

	cout << res << endl;

}