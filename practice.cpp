#include <iostream> 
using namespace std; 

int gcd(int a, int b) {
	int tmp = 0;
	if (b == 0)
		return a; 
	else {
		
		return gcd(b, a % b);
			
	}
		
}

int lcm(int a, int b, int numGcd) {
	return (a / numGcd) * (b / numGcd) * numGcd;

}
int main() {
	ios_base::sync_with_stdio(false);
	int a, b; 
	cin >> a >> b; 
	int numGcd = gcd(a, b); 
	
	cout << numGcd << endl<< lcm(a,b,numGcd) ;


	return 0;
}