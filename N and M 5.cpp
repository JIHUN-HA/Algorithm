#include <iostream> 
using namespace std;
bool visit[10001];
bool possible[10001];
int num[9] = { 0 };
int N, M;

void dfs(int cnt) {

	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << num[i] << ' ';
		}
		cout << '\n';
		return;
	}
	
	for (int i = 1; i <= 10000; i++) {
		if ( !visit[i] && possible[i]) {

			visit[i] = true;
			num[cnt] = i;
			dfs(cnt + 1);
			
			visit[i] = false;

		}
	}
}

int main() {
	cin >> N >> M;
	int tmp = 0;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		possible[tmp] = true;
	}
	dfs(0);

	return 0;
}