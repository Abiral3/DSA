#include<iostream>
using namespace std;
#include<string>
#define max 50

class Prefix{
	public:	
		int Precedence(char ch)
		{
			switch (ch)
			{
			case '$':
				return 4;
			case '/':
			case '*':
				return 3;
			case '+':
			case '-':
				return 2;
			default:
				return 1;
			}
		}
		void Convert(){
			char prestack[max]={};
			char opstack[max]={};
			string infix;
			int i, o=-1, p=-1, len, length;
			cout<<"Enter a infix expression: ";
			cin>>infix;
			length=infix.length();
			len=length;
			for(i=length-1;i>=0;i--){
				if(infix[i]==')'){
					opstack[++o]=infix[i];
					len++;
				}
				else if((infix[i]>='A'&&infix[i]<='Z')||(infix[i]>='a'&&infix[i]<='z')){
					prestack[++p]=infix[i];
				}
				else if(infix[i]=='('){
					len++;
					while(opstack[o]!=')'){
						prestack[++p]=opstack[o];
						o--;
					}
					o--;
				}
				else{
					if(Precedence(opstack[o])>Precedence(infix[i])){
						prestack[++p]=opstack[o--];
						opstack[++o]=infix[i];
					}
					opstack[++o]=infix[i];
				}
			}
			
			while(o!=-1){
				prestack[++p]=opstack[o];
				o--;
			}
		
			cout<<"Prefix: ";
			for(i=len-1;i>=0;i--){
				cout<<prestack[i];
			}
		}
};

int main(){
	Prefix object;
	object.Convert();
	return 0;
}
