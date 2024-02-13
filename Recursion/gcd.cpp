#include<iostream>
using namespace std;

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	else
	return gcd(b, a%b);
}

int main(){
	int a, b, res;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	res=gcd(a,b);
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<res;
	return 0;	
}
