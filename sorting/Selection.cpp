#include<iostream>
using namespace std;

void Sort(int A[]){
	
}

int main(){
	int n,min;
	cout<<"Enter the size of array: ";
	cin>>n;
	int A[n];
	
	cout<<"Enter the elements of array: "<<endl;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(A[j]<A[min]){
				min=j;
			}
		}
			if(min!=i){
				int temp=A[i];
				A[i]=A[min];
				A[min]=temp;
			}	
	}
	
	
	cout<<"Sorted array is: ";
	for(int i=0;i<n;i++){
		cout<<A[i];
		if(i!=n-1)
		cout<<", ";
	}
}
