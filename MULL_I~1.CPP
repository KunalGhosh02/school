//WAP to maintain the class list of the students which have their name and roll,
// number and display their class,roll number using Multilevel inheritance.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class stud
{
	private:
	    char n[25];
	    int roll;
	public:
	    void entry();
		void display();
};

class stud1:protected stud
{
	private:
	    char c[5];
		char sec;
	public:
	    void entry1();
	    void display1();
	    stud1()
	    {   
			entry();
			entry1();
			display();   
		}
};

class stud2:private stud1
{
	public:
	    stud2()
		{    display1();    }
};

void stud::entry()
{
	cout<<"\n Enter name of student:";
	gets(n);
	cout<<"\n Enter roll no. of student:";
	cin>>roll;
}

void stud::display()
{
	cout<<"\n\n Name of student:";
	puts(n);
	cout<<" Roll no. of student:"<<roll;
}

void stud1::entry1()
{
	cout<<"\n Enter class of student:";
	gets(c);
	cout<<"\n Enter section of student:";
	cin>>sec;
}

void stud1::display1()
{
	cout<<"\n Class of student:";
	puts(c);
	cout<<" Section of student:"<<sec;
	getch();
}

void main()
{
	clrscr();
	stud2 A;
}