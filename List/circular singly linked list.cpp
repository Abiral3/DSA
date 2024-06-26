#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(){
			cout<<"Enter a data for New Node: ";
			cin>>data;
			this->data=data;
			this->next=NULL;
		}
};

class LinkList{
	Node* head=NULL;
	Node* last=NULL;
	Node* temp1;
	Node* temp2;
	public:
		void InsertB(){
			Node* newNode=new Node();
			if(head==NULL && last==NULL){
				head=last=newNode;
				head->next=last;
				last->next=head;
			}else{
				last->next=newNode;
				newNode->next=head;
				head=newNode;
			}
		}
		
		
		void InsertE(){
			Node* newNode=new Node();
			if(head==NULL && last==NULL){
				head=last=newNode;
				head->next=last;
				last->next=head;
			}else{
				last->next=newNode;
				last=newNode;
				last->next=head;
			}
		}
		
		void InsertS() {
    		int pos;
    		cout << "Enter a position: ";
    		cin >> pos;
    
    		int counter = 0;
    		temp1 = head;
   
    		if (pos == 1) {
    			InsertB();
    			return;
    		}

    		do{
        		counter++;
        		if (counter == pos-1) { 
        			if(temp1->next==head){
						InsertE();
					}else{
						Node* newNode=new Node();
						newNode->next=temp1->next;
						temp1->next=newNode;
					}
					return;
        		}
        		temp1 = temp1->next;
    		}while(temp1!=head);
    		cout << "Invalid Position." << endl;
		}

		
		void DeleteB(){
			if(head==NULL && last==NULL){
				cout<<"Link List is Empty."<<endl;
			}else{
				temp1=head;
				temp2=last;
				cout<<"Deleted Item: "<<temp1->data<<endl;
				if(temp1==temp2){
					head=NULL;
					last=NULL;
				}else{
					head=temp1->next;
					last->next=head;
				}
			}
		}
		
		void DeleteE(){
			if(head==NULL && last==NULL){
				cout<<"Link List is Empty."<<endl;
			}else{
				temp1=head;
				temp2=last;
				cout<<"Deleted Item: "<<temp2->data<<endl;
				if(temp1==temp2){
					head=NULL;
					last=NULL;
				}else{
					do{
						temp1=temp1->next;
					}while(temp1->next!=last);
					last=temp1;
					last->next=head;
				}
			}
		}
		
		void DeleteS() {
    		int pos;
    		cout << "Enter a position: ";
    		cin >> pos;
    
    		int counter = 0;
    		temp1 = head;
   
    		if (pos == 1) {
    			DeleteB();
    			return;
    		}else{
    			while (temp1 != last) {
    				counter++;
        			if (counter == pos-1) { 
						if(temp1->next==head){
							cout << "Invalid Position." << endl;
							return;
						}
						if(temp1->next->next==head){
							DeleteE();
							return;
						}
						cout<<"Deleted Item: "<<temp1->next->data<<endl;
						temp2=temp1->next->next;
						temp1->next=temp2;
            			return;
        			}
        			temp1 = temp1->next;
    			}
    		cout << "Invalid Position." << endl;
			}	
		}
		
		void Search(){
			if(head==NULL){
				cout<<"Link List is Empty."<<endl;
			}else{
				int element,c,counter;
				cout<<"Enter a element to search: ";
				cin>>element;
				temp1=head;
				c=counter=0;
				do{
					c++;
					if(temp1->data==element){
						counter++;
						cout<<element<<" found at "<<c<<"th position."<<endl;
					}
					temp1=temp1->next;
				}while(temp1!=head);	
				if(counter==0){
					cout<<element<<" is not in LinkList."<<endl;
				}
			}
		}
		
		void Traverse(){
			if(head==NULL && last==NULL){
				cout<<"Link List is Empty."<<endl;
			}else{
				temp1=head;
				do{
					cout<<temp1->data<<" , ";
					temp1=temp1->next;
				}while(temp1!=head);
				cout<<endl;
			}
		}
};

int main(){
	LinkList obj;
	int choice;
	do{
		do{
			cout<<"Enter choice: "<<endl;

			cout<<"1. Insert At Begining"<<endl;
			cout<<"2. Insert At End"<<endl;
			cout<<"3. Insert At Specific Position"<<endl;
			cout<<"4. Delete At Begining"<<endl;
			cout<<"5. Delete At End"<<endl;
			cout<<"6. Delete At Specific Position"<<endl;
			cout<<"7. Traverse"<<endl;
//			cout<<"8. Search"<<endl;
			cout<<"8. Exit"<<endl;
			cin>>choice;
		}while(choice>9 || choice<0);
		switch(choice){
			case 1:
				obj.InsertB();
				break;

			case 2:
				obj.InsertE();
				break;

			case 3:
				obj.InsertS();
				break;

			case 4:
				obj.DeleteB();
				break;

			case 5:
				obj.DeleteE();
				break;

			case 6:
				obj.DeleteS();
				break;

			case 7:
				obj.Traverse();
				break;

//			case 8:
//				obj.Search();
//				break;

			default:
				break;
		}
	}while(choice!=8);

	return 0;
}
