#include<iostream>
#include<string>
#define max 50
#include<math.h>
using namespace std;

class postEvl{
	public:
		int vstack[max]={};
		int t=-1;
		void push(int val){
			vstack[++t]=val;
		}
		
		int pop(){
			int n;
			n = vstack[t--];
			return (n);
		}
		
	void Evaluate(){
		int i, res=0, len=0, op1=0, op2=0, value[max]={};
		string postfix;
		char ch;
		cout<<"Enter a valid Postfix: ";
		cin>>postfix;
		len=postfix.length();
		for(i=0;i<=len-1;i++){
			if(isalpha(postfix[i])){
				cout<<"Enter value of "<<postfix[i]<<": ";
				cin>>value[i];
				push(value[i]);
			}
			else{
				ch=postfix[i];
				op2=pop();
				op1=pop();
				switch(ch){
					case '+': 
						push(op1+op2);
						break;
					case '-':
						push(op1-op2);
						break;
					case '*':
						push(op1*op2);
						break;
					case '/':
						push(op1/op2);
						break;
					case '$':
						push(pow(op1,op2));
						break;	
				}
			}
		}
		res=pop();
		cout<<"Result: "<<res<<endl;
	}	
};

int main(){
	postEvl object;
	object.Evaluate();
	return 0;
}
