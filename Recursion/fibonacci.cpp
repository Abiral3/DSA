#include<iostream>
using namespace std;
int Fibonacci(int n){
	if(n==0 || n==1)
		return n;
	else
		return (Fibonacci(n-1)+Fibonacci(n-2));
	
}
int main(){
	int num;
	cout<<"Enter the number of terms in the Series: ";
	cin>>num;
	for(int i=0;i<num;i++){
		cout<<Fibonacci(i)<<" , ";
	}
	return 0;
}
