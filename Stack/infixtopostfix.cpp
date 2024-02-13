#include <iostream>
#include <string>
#define max 50
using namespace std;
class Postfix
{
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

	void Convert()
	{
		string infix;
		char poststack[max]={}, opstack[max]={};
		int i, o=-1, p=-1, len, length;
		cout<<"Enter a infix expression: ";
		cin>>infix;
		length=infix.length();
		len=length;
		for(i=0;i<=length-1;i++){
			if(infix[i]=='('){
				opstack[++o]=infix[i];
				len++;
			}
			else if((infix[i]>='A'&&infix[i]<='Z')||(infix[i]>='a'&&infix[i]<='z')){
				poststack[++p]=infix[i];
			}
			else if(infix[i]==')'){
				len++;
				while(opstack[o]!='('){
					poststack[++p]=opstack[o];
					o--;
				}
				o--;
			}
			else{
				if(Precedence(opstack[o])>Precedence(infix[i])){
					poststack[++p]=opstack[o--];
					opstack[++o]=infix[i];
				}
				opstack[++o]=infix[i];
			}
		}
		
		while(o!=-1){
			poststack[++p]=opstack[o];
			o--;
		}
		
		cout<<"Postfix: "<<poststack;	
	}
};
int main()
{
	Postfix object;
	object.Convert();
	return 0;
}
