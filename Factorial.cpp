#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int a){
	if(a <= 1 || a % 2 == 0){
		return false;
	}
	if(a == 2){
		return true;
	}
	for(int i = 2; i < sqrt(a)+1; i++){
		if(a % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int a;
	int b;
	cout << "The first number:";
	cin >> a;
	cout << "The second number:";
	cin >> b;
	if(a < 3){
		cout << 2 << "\n";
		a = 3;
	}
	if(a % 2 == 0){
		a++;
	}
	for(int i = a; i <= b; i+=2){
		if(isPrime(i)){
			cout << i << "\n";
		}
	}
}
