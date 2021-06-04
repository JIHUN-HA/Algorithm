#include <iostream> 
#define MAX 1000001
using namespace std;

bool check[MAX];
int sosu[MAX];
int T  = 1, n = 1 , cnt = 0; 


int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(nullptr); cout.tie(NULL);

	for (int i = 2; i <= 1000; i++) {
		if(!check[i])
			sosu[cnt++] = i;
		for (int j = 2; i * j < MAX; j++) {
			check[i * j] = true; //true°¡ ¼Ò¼ö ¾Æ´Ô 
			
			
		}
	}
	

	
	while (true) {
		cin >> n; 
		if (n == 0)
			return 0;
		int maxNum = 0;
		for (int i = 1; i < cnt; i++) {
			int index = n - sosu[i];
			if (!check[n - sosu[i]] ) {
				maxNum = n - sosu[i];
				cout << n << " = " << n - maxNum << " + " << maxNum << '\n';
				break;
			}
			
		}
	
		
		
		 if(maxNum == 0 ) cout << "Goldbach's conjecture is wrong."<< endl;

	}
	
	

	return 0;
}
