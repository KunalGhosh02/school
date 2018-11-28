#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct node
 {
  char name[20];
  int roll;
  node *next;
 }*top,*ptr,*save;

 void createlist()
 {
   ptr=new node;
   cout<<"Enter your name and roll no.:";
   gets(ptr->name);
   cin>>ptr->roll;
   ptr->next=NULL;
   if(top==NULL)
   top=ptr;
   else
   {
     save=top;
     top=ptr;
     top->next=save;
   }
 }
 void display()
 {
  node *prn;
  prn=new node;
  prn=top;
  while(prn!=NULL)
  {
   cout<<"<-"<<prn->name<<","<<prn->roll;
   prn=prn->next;
  }getch();
 }
 void del()
 {
  ptr=new node;
  ptr=top;
  top=top->next;
  delete ptr;
 }
 void main()
 {
   clrscr();
   int x;
   void createlist();
   void display();

  cout<<"Stack is empty \n"<<"Format-Name,Roll no \n";
  createlist();
  do{
    cout<<"\n 1> Add elements.\n 2> Display \n 3> Delete \n 4> Exit :-  ";
    cin>>x;
     if(x==1)
      createlist();
     else
      if(x==2)
       display();
      else
       if(x==3)
	del();
     }while(x!=4);
  getch();
 };

 }