#include <iostream> 
#define MAX 1000001
using namespace std; 

long long int num[MAX] = { 0 };
int T, N; 


int main() {
	cin >> T; 

	for (int i = 1; i < MAX; i++) 
		num[i] = 1;

	for (int i = 2; i < MAX; i++) {
		for (int j = 1; i * j < MAX; j++) {
			num[i * j] += i;
		}
	}
	
	for (int i = 1; i < MAX ;  i++) {
		num[i] = num[i]+ num[i - 1];
	}

	for (int i = 0; i < T; i++) {
		cin >> N; 
		cout << num[N] << '\n';
			
	}


	return 0;
}