#include<iostream>
using namespace std;

int partition(int a[10], int l, int r){
	int x=l;
	int y=r;
	int p=a[l], temp;
	while(x<y){
		while(a[x]<=p)
			x++;
		while(a[y]>p)
			y--;
		if(x<y){
			temp=a[x];
			a[x]=a[y];
			a[y]=temp;
		}
	}
	a[l]=a[y];
	a[y]=p;
	return y;
}

void quick(int a[10], int l, int r){
	int p;
	if(l<r){
		p=partition(a,l,r);
		quick(a,l,p-1);
		quick(a,p+1,r);
	}
}

int main(){
	int a[100],n,i,l,r;
	cout<<"Enter Number of Elements: ";
	cin>>n;
	cout<<"Enter the elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}	
	l=0;
	r=n-1;
	quick(a,l,r);
	cout<<"Elements after sort: ";
	for(i=0;i<n;i++){
		cout<<a[i];
		if(i!=n-1)
		cout<<", ";
	}
	return 0;
}
