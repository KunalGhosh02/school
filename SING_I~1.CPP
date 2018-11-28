#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class stud
{
	private:
	    char n[25];
	    int roll;
		char c[5];
		char sec;
	public:
	    void entry();
		void display();
};

class stud1:private stud
{
	public:
	    stud1()
		{
			entry();
			display();
		}
};

void stud::entry()
{
	cout<<"\n Enter name of student:";
	gets(n);
	cout<<"\n Enter roll no. of student:";
	cin>>roll;
	cout<<"\n Enter class of student:";
	gets(c);
	cout<<"\n Enter section of student:";
	cin>>sec;
}

void stud::display()
{
	cout<<"\n\n Name of student:";
	puts(n);
	cout<<" Roll no. of student:"<<roll;
    cout<<"\n Class of student:";
	puts(c);
	cout<<" Section of student:"<<sec;
	getch();
}

void main()
{
	clrscr();
	stud1 A;
}