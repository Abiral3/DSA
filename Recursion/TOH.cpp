#include<iostream>
using namespace std;
static int steps=0;
void TOH(int n , char S, char D, char T){
	if(n>0){
		TOH(n-1,S,T,D);
	cout<<"Move disk "<<n <<" from "<<S<<" to "<<D<<endl;
	steps++;
	TOH(n-1,T,D,S);
}
}

int main(){
	int n;
	cout<<"Enter number of Disks: ";
	cin>>n;
	TOH(n, 'S','D','T');
	cout<<"Total Steps: "<<steps;
	return 0;
}
