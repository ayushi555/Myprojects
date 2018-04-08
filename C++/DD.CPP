#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<process.h>
struct Node{
int info;
Node *next;
}
*top,*ptr,*save,*newptr;
Node*create(int);
void puch(Node*);
void display(Node*);
 void main()
 {
cout<<"enter:";
cin>>it;
newptr=create(it);
if(newptr==null)
exit(-1);
push(newptr);
display(top);


}

Node*create(int n)
{
 ptr=new Node;
 ptr->info=n;
 ptr->next=NULL;
  return ptr;
  }
void push(Node*np)
{
if(top==NULL) TOP=NP;






