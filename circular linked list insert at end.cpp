#include<iostream>

#include<stdlib.h>
using namespace std;

struct Node{
	int info;
	struct Node *next;
};
typedef struct Node NodeType;
NodeType *head=NULL;
NodeType *last=NULL;
NodeType *temp;
NodeType *newnode;
void createnode(){

    newnode = (NodeType*)malloc(sizeof(NodeType));
    cout<<"Enter the element to insert :: ";
    cin>>newnode->info;
}

void insertatend(){
	
	createnode();
	if(head==NULL){
		
		
		head=newnode;
		last=newnode;
		newnode->next=newnode;
		
	}else{
	
		last->next=newnode;
		last=newnode;
		newnode->next=head;
	}
	
}

void display(){
	temp=head;
	cout<<"elements in circular linked  list are:"<<endl;
	
	cout<<temp->info<<"-->";
	if(temp==NULL){
		cout<<"circular linked list is empty"<<endl;
	}
	
	while(temp->next!=head){
			temp=temp->next;
			cout<<temp->info;
			cout<<"-->";
		
			
	}
}

	
	

int main(){
	int a,n;
	string z;
	cout<<"create a circular linkedlist"<<endl;
	insertatend();


	
	do{
	insertatend();
	display();

	cout<<"\n";
	cout<<"do u want to insert data at end?";
	cin>>z;

	
	}while(z=="y");
	return 0;
	
}
