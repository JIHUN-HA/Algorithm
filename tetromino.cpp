#include <iostream>
using namespace std;

int gra[501][501] = { 0 }; 



int dx[76] = { -1,0 , 0 ,0 ,  0, 0, 0, 1 ,    0 ,1, 2, 1,   0, 1 , 2,  1 ,
				0, 0, 0, 1 ,  0, 0, 0, -1   , 0, 1, 2, 2  , 0, 1, 2, 0,
				0, 1, 1,1,  0, 1, 0, 0,   0,1,2,2,	0, 0, 1, 2,		
				0,0,1,1, 0,1,1,2,	0,1,1,2	, 0,0,-1,-1,
				0,0,0,0,  0,1,2,3,
				0,0,1,1, 
				};

int dy[76] = { 1,0 , 1, 2,  0,1 ,2 , 1,   0 ,0 , 0, -1, 0 , 0, 0, 1  ,  
				0, 1 , 2 , 2,  0, 1, 2, 2,   0, 0, 0, 1,  0, 0, 0, 1,
				0, 0, 1,2,  0, 0, 1, 2,  0, 0, 0, -1,  0, 1, 1, 1, 
				0,1,1,2, 0,0,-1,-1, 0,0,1,1 , 0,1,1,2,   	
				0,1,2,3,  0,0,0,0,
				0,1, 0,1, 
				};



int main() {
	int N, M;

	cin >> N >> M; 

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> gra[i][j];
		}
	}
	int ans = 0; 
	for (int i = 0; i < N ; i++) {
		for (int j = 0; j < M; j++) {
			int sum = 0;
			for (int x = 0; x < 76; x++) {
				int nx = j + dx[x];
				int ny = i + dy[x];

				if (nx < 0 || nx > M || ny < 0 || ny > N)
					continue;

				if (x % 4 == 0 && x != 0) {

					if (ans < sum)
						ans = sum;

					sum = 0;
				}

				sum += gra[ny][nx];
				
			}
			if (ans < sum)
				ans = sum;
		}
	}
	cout << ans;

	return 0;
}