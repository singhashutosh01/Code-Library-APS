#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

//Insert at front
void pushFront(Node **head, int val)
{
    Node * newNode=NULL;
    newNode=new Node();
    newNode->data=val;
    newNode->next=(*head);
    (*head)=newNode;
}
void pushBw(Node *head, int val)
{
    if(head==NULL){
        return;
    }
    Node *newNode=new Node();
    newNode->data=val;
    newNode->next=head->next;
    head->next=newNode;
}
void atLast(Node **head, int val)
{
    Node *curr=*head;
    Node *newNode=new Node();
    newNode->data=val;
    newNode->next=NULL;
    if(*head==NULL){
        *head=newNode;
        return;
    }
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=newNode;
}
//Print
void printList(Node * n)
{
    while(n!=NULL)
    {
        cout<<n->data<<"\n";
        n=n->next;
    }
}
int main()
{
    Node *head=NULL;
    pushFront(&head,9);
    pushFront(&head,10);
    pushBw(head,11);
    atLast(&head,100);
    atLast(&head,200);
    printList(head);
    
}
