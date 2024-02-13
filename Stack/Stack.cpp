#include<iostream>
using namespace std;
#define max 10

class Stack{
	private:
		int arr[max];
	public:
		int top=-1;
		
		void makeEmpty()
	{
		top = -1;
		cout << "The Stack is empty now!"<<endl;
	}	
		int checkEmpty()
	{
		if (top == -1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	int checkFull()
	{
		if (top == max - 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	void Push(){
		int value;
		if(checkFull()==1){
			cout<<"Stack Overflow"<<endl;
		}
		else{
			cout<<"Enter the element to push: ";
			cin>>value;
			top++;
			arr[top]=value;
		}
	}
	
	void Pop(){
		if(checkEmpty()==1){
			cout<<"Stack Underflow"<<endl;
		}
		else
		{
			top=top-1;
			cout<<"Success!"<<endl;
		}
	}
	
	void Traverse(){
		if(checkEmpty()==1){
			cout<<"Nothing to Display"<<endl;
		}
		else{ 
			cout<<"Elements of Stack:"<<endl;
			for(int i=top; i>=0; i--){
				cout<< arr[i]<<", ";
			}
			cout<<endl;
		}
	}
	
};

int main(){
	Stack object;
	int choice;
	char a;
Again:
	cout << "Choose from the option:" << endl;
	cout << "1. Make Empty Stack" << endl;
	cout << "2. Check Underflow" << endl;
	cout << "3. Check Overflow" << endl;
	cout << "4. Push" << endl;
	cout << "5. Pop" << endl;
	cout << "6. Traverse " << endl;
	cin >> choice;
	
	switch (choice)
	{
	case 1:
		object.makeEmpty();
		cout << "Do You want to perform other activities?(Y/N) ";
		cin >> a;
		if (a == 'Y' || a == 'y')
		{
			goto Again;
		}
		else
			break;

	case 2:
		if(object.checkEmpty()==1){
			cout<<"Underflow"<<endl;
		}
		else
			cout<<"Stack is not underflow"<<endl;
		cout << "Do You want to perform other activities?(Y/N) ";
		cin >> a;
		if (a == 'Y' || a == 'y')
		{
			goto Again;
		}
		else
			break;
	case 3:
			if(object.checkFull()==1){
			cout<<"Stack Overflow"<<endl;
		}
		else
			cout<<"Stack is not overflow"<<endl;
		cout << "Do You want to perform other activities?(Y/N) ";
		cin >> a;
		if (a == 'Y' || a == 'y')
		{
			goto Again;
		}
		else
			break;
	case 4:
		object.Push();
		cout << "Do You want to perform other activities?(Y/N) ";
		cin >> a;
		if (a == 'Y' || a == 'y')
		{
			goto Again;
		}
		else
			break;
	case 5:
		object.Pop();
		cout << "Do You want to perform other activities?(Y/N) ";
		cin >> a;
		if (a == 'Y' || a == 'y')
		{
			goto Again;
		}
		else
			break;
	case 6:
		object.Traverse();
		cout << "Do You want to perform other activities?(Y/N) ";
		cin >> a;
		if (a == 'Y' || a == 'y')
		{
			goto Again;
		}
		else
			break;
	default:
		cout << "Wrong Choice Try Again!"<<endl;
		goto Again;
	}
}
