#include<iostream>
using namespace std;

int facto(int n){
	if(n==0)
	return 1;
	else
	return n*facto(n-1);
}

int main(){
	int n;
	int res;
	cout<<"Enter a Number: ";
	cin>>n;
	res=facto(n);
	cout<<"factorial of "<<n<<" is "<<res;
	return 0;
}
