#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node{
    int info;
    struct Node *next;
};
typedef struct Node NT;
NT *head=NULL;
NT *last=NULL;
NT *newNode;
NT *temp;
void createnode(){
    newNode=(NT*)malloc(sizeof(NT));
    cout<<"Enter Value: ";
    cin>>newNode->info;
}
void insertLast(){
    createnode();
    if(head==NULL){
        head=newNode;
        last=newNode;
        newNode->next=newNode;
    }else{
        last->next=newNode;
        last=newNode;
        newNode->next=head;
    }
}

void insertSpecific(){
    createnode();
    int pos;
    cout<<"Enter Desired Location: ";
    cin>>pos;
    if(head==NULL){
        cout<<"Invalid";
    }else{
        temp=head;
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }

}
void display(){
    temp=head;
    cout<<"Elements are in circular linkedlist :\n";
    cout<<temp->info<<"-->";
   
        while(temp->next!=head){
            temp=temp->next;
            cout<<temp->info;
            cout<<"-->";
        }
}
int main()
{
    char y;
    cout<<"*Create A Circular Link List At First*\n";
    insertLast();
    insertLast();
    insertLast();
    display();
    cout<<"\n*Now Insert data at Specific Position*\n";
    do{
        insertSpecific();
        display();
        cout<<"\n\nContinue?";
        cin>>y;
    }while(y!='n');
    return 0;
}

