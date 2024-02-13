#include<iostream>
#define max 10
using namespace std;

class Queue{
	private:
		int arr[max];
	public:
		int rear=-1;
		int front=0;
		void makeEmpty(){
			rear=-1;
			front=0;
		}
		int checkEmpty(){
			if(rear<front)
				return 1;
			else
				return 0;
		}
		
		int checkFull(){
			if(rear==max-1)
				return 1;
			else
				return 0;
		}
		
		void Enqueue(){
			if(checkFull()==1){
				cout<<"Queue is full!"<<endl;
			}
			else{
				rear++;
				int a;
				cout<<"Enter the element: ";
				cin>>a;
				arr[rear]=a;
			}
		}	
		
		void Dequeue(){
			if(checkEmpty()==1){
				cout<<"Queue is Empty!"<<endl;
			}
			else{
				cout<<arr[front]<<" is deleted Successfully."<<endl;
				front++;
			}
		}
		void Traverse(){
			if(checkEmpty()==1){
				cout<<"Nothing to Display"<<endl;
			}
			else{
				cout<<"Queue: ";
				for(int i=front; i<=rear; i++){
					cout<<arr[i]<<", ";
				}
				cout<<endl;
			}
		}	
};

int main(){
	Queue object;
	int choice;
	
	Again:
	cout<<"Choose the operations:"<<endl;
	cout<<"1. Make Empty"<<endl;
	cout<<"2. Check Empty"<<endl;
	cout<<"3. Check Full"<<endl;
	cout<<"4. Enqueue"<<endl;
	cout<<"5. Dequeue"<<endl;
	cout<<"6. Traverse"<<endl;
	cout<<"7. Exit"<<endl;
	cin>>choice;

	switch(choice){
		case 1: object.makeEmpty();
				cout<<"The Queue is Empty now"<<endl;
				goto Again;
				
		case 2: if(object.checkEmpty()==1){
					cout<<"Queue is Empty"<<endl;
					goto Again;
				}
				else{
					cout<<" Queue is not Empty"<<endl;
					goto Again;
				}
				
		case 3: if(object.checkFull()==1){
					cout<<"Queue is Full"<<endl;
					goto Again;
				}
				else{
					cout<<"Queue is not full"<<endl;
					goto Again;
				}
				
		case 4: object.Enqueue();
				goto Again;
				
		case 5: object.Dequeue();
				goto Again;
				
		case 6: object.Traverse();
				goto Again;
				
		case 7: break;
		default: cout<<"Invalid choice!"<<endl;
				goto Again;
	}
	return 0;
}
