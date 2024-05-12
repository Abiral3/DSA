#include<iostream>
using namespace std;

int main(){
	int n,min;
	cout<<"Enter the size of an array: ";
	cin>>n;
	int A[n];
	
	cout<<"Enter an element of the array: "<<endl;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	int gap,i,j;
	
	for(gap=n/2;gap>0;gap=gap/2){
		for(i=gap;i<n;i++){
			int temp=A[i];
			for(j=i;j>=gap && A[j-gap]>temp;j=j-gap){	
				A[j]=A[j-gap];
			}
			A[j]=temp;  
		}
	}
	
	cout<<"Sorted array is: ";
	for(int i=0;i<n;i++){
		cout<<A[i];
		if(i!=n-1)
		cout<<",";
	}
	return 0;
}
