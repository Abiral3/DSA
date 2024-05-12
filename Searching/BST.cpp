#include<iostream>
using namespace std;

int BinarySearch(int a[], int l, int r, int key){
	int m;
	int flag=0;
	if(l<=r){
		m=(l+r)/2;
		if(key==a[m])
		flag = m;
		else if(key<a[m])
		return BinarySearch(a,1,m-1,key);
		else
		return BinarySearch(a, m+1,r,key);
	}
	else
		return flag;
}

int main(){
	int n, a[100],i,key,flag;
	cout<<"Enter the number of data items: ";
	cin>>n;
	cout<<"Enter the data items in sorted form: "<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter element to be searched: ";
	cin>>key;
	flag=BinarySearch(a,0,n-1,key);
	if(flag==0)
	cout<<"Element not Found";
	else
	cout<<"Element found at location: "<<flag+1;
	return 0;
}
