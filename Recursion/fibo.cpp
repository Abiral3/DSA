#include<iostream>
using namespace std;
int Fibonacci(int n){
	if(n==0 || n==1)
		cout<< n<<", ";
	else
		cout<< (Fibonacci(n-1)+Fibonacci(n-2))<<", ";
	
}
int main(){
	int num;
	cout<<"Enter the number of terms in the Series: ";
	cin>>num;
	Fibonacci(num);
	return 0;
}
