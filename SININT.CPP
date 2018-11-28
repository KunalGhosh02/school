#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class person
	{
	     char name[21];
		  public:
	      void indata()
	      {	cout<<"\n\nEnter the name of Student: " ;
		gets(name);
	      }
	      void outdata()
	      {	   cout<<"\n\n";
		    for(int i=0; i<79; i++)
		     cout<<"-";
		     cout<<"\n\nName of the student is: "<<name;

	      }
	};
class student: public person
  {
    int roll;
    int cls;
    public:
    void enter()
    {   
        cout<<"\n\nEnter the Class.: ";
	cin>>cls;
	cout<<"\n\nEnter the Roll no.: ";
	cin>>roll;
    }
  void display()
    {	
       cout<<"\n\nClass : "<<cls;
       cout<<"\n\nRoll number : "<<roll;
        
    }
};
void main()
{ clrscr();
 student A;
 A.indata();
 A.enter();
 A.outdata();
 A.display();
  getch();
}
