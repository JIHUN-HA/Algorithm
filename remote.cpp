#include <iostream>
using namespace std;

bool check[10];
int N, M;

int possible(int num ) {
	int loc = 0;
	for (int j = 1; num / j != 0;) {
		if (check[num % 10])
			return 0;
		
		num /= 10;
		loc++;
	}
	
	
	return loc;
}


int main() {
	int tmp = 0, min = 1000001;
	
	cin >> N >> M; 
	
	for (int i = 0; i < M; i++) {
		cin >> tmp; 
		check[tmp] = true;
	}
	int ans = N - 100; 
	if (ans < 0)
		ans = -ans;

	for (int i = 0; i < 1000000; i++) {
		
		
		int len = possible(i);
		if (len > 0) {
			int press = N - i;
			
			if (press < 0)
				press = -press;

			if (ans > len + press)
				ans = len + press;
		}


	}
	
	cout << ans << endl;
	return 0;
}