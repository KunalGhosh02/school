#include<iostream.h>
#include<process.h>
#include<conio.h>

// Creating a NODE Structure
struct node
{   int a;
    node *next;
}*front,*ptr,*rear;

// Show queue
// to show the queue
void show()
{
    node *ptr1=front;
    cout<<"\nThe queue is\n";
    while(ptr1!=NULL)
    {   cout<<ptr1->a<<" ->";
	ptr1=ptr1->next;
    }
    cout<<"NULL\n";
    getch();
}

// PUSH Operation
// to insert an element
void push()
{   clrscr();
    cout<<"\nPUSH Operation\n";
    cout<<"Enter a number to insert: ";
    cin>>ptr->a;
    ptr=new node;
    ptr->next=NULL;
    if(front==NULL)
		front=rear=ptr;
    else
	{
		rear->nxt=ptr;
		rear=ptr;
	}
    cout<<"\nNew item is inserted to the queue!!!";
    getch();
    show();
}

// POP Operation
// to delete an element
void pop()
{   clrscr();
    show();
    if(front==NULL)
    {
     cout<<"\nThe queue is empty!!!";
     getch();
    }
    else
    {
     ptr=front;
     front=front->next;
     cout<<"\nPOP Operation........\nPoped value is "<<ptr->a;
     delete ptr;
     getch();
     show();
    }
}

// Main function
void main()
{   int choice;
	front=NULL;
    while(1)
    {
	clrscr();
	cout<<"\n-----------------------------------------------------------";
	cout<<"\n\t\tQUEUE USING LINKED LIST\n\n";
	cout<<"1:PUSH\n2:POP\n3:DISPLAY queue\n4:EXIT";
	cout<<"\nEnter your choice(1-4): ";
	cin>>choice;
	switch(choice)
	{
	    case 1:push();
		   break;

	    case 2:pop();
		   break;

	    case 3:clrscr();
		   show();
		   break;

            case 4:exit(0);
                
            default:cout<<"Please enter correct choice(1-4)!!";
                    break;
        }
    }
}