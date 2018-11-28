#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>

class student
{
    char fname[15],mname[15];     //father name & mother name
    int rollno,admin_no,dd,mm,yy;    //roll number,Admission no, date,Month,Year
 public:
    char name[15];
    void getdata();               //function for input data
    void putdata();
    void modifydata();           //Function to edit data
    void display();              //Function to display data
    int get_roll()               //function return roll-no
    { return rollno; }
}s1;

void student::getdata()
{ 
  clrscr();  
  cout<<"\n\n\t\t\t ::  RECORD ENTRY SECTION  ::";
  cout<<"\n 1. Enter the roll no. :";cin>>rollno;
  cout<<"\n 2. Enter the name :";gets(name);
  cout<<"\n 3. Father name  :";gets(fname);
  cout<<"\n 4. Mother name  :"; gets(mname);
  cout<<"\n 5. Enter Admission no. :";cin>>admin_no;
  cout<<"\n 6. Enter date of birth :";
  cout<<"\n\t   Date:";cin>>dd;
  cout<<"\n\t   Month:";cin>>mm;
  cout<<"\n\t   Year :";cin>>yy;
}

void student::putdata()
{
  clrscr();
  cout<<"\n\n\t\t\t ::  RECORD  ::";
  cout<<"\n 1. Roll No. : ";cout<<rollno;
  cout<<"\n 2. Name : ";puts(name);
  cout<<" 3. Father name : ";puts(fname);
  cout<<" 4. Mother name : "; puts(mname);
  cout<<"\n 5. Admission no.: ";cout<<admin_no;
  cout<<"\n 6. Date of birth: ";cout<<dd<<"/"<<mm<<"/"<<yy;
}

void student::modifydata()
{ 
  char nm[15],fath[15],moth[15];
  int rno,d,m,y,admis;
  clrscr();
  cout<<"\n\n\t\t Enter new record :";
  cout<<"\n  Name :";gets(nm);
  cout<<"\n Roll No. :";cin>>rno;
  cout<<"\n Father name :";gets(fath);
  cout<<"\n Mother name :";gets(moth);
  cout<<"\n Admission No. :";cin>> admis;
  cout<<"\n Date of Birth :";
  cout<<"\n Date :"; cin>>d;
  cout<<"\n Month :";  cin>>m;
  cout<<"\n Year :"; cin>>y;
  cout<<"\n\n Your Record is modified!!!";
  getch();
  strcpy(name,nm);
  strcpy(fname,fath);
  strcpy(mname,moth);
  rollno=rno;
  admin_no=admis;dd=d;mm=m;yy=y;
}

void student::display()
{ 
  int z=6;
  clrscr();
  gotoxy(21,1);
  cout<<"::Student Information::";
  gotoxy(23,2);
  cout<<"::Display Record::";
  gotoxy(1,3);
  cout<<"----------------------------------------------------------------------------";
  gotoxy(1,4);
  cout<<"Name           Roll No.   Admn.No.   D.O.B.     Father Name    Mother Name    ";
  gotoxy(1,5);
  cout<<"----------------------------------------------------------------------------";
  ifstream fff;
  fff.open("student.txt",ios::in);
  while(!fff.eof())
  {
  fff.read((char*)&s1,sizeof(s1));
  gotoxy(1,z);
  cout<<name;
  gotoxy(16,z);
  cout<<rollno;
  gotoxy(27,z);
  cout<<admin_no;
  gotoxy(38,z);
  cout<<dd<<"/"<<mm<<"/"<<yy;
  gotoxy(49,z);
  puts(fname);
  gotoxy(64,z);
  puts(mname);
  z++;
  }
  gotoxy(1,z);
  clreol();
  fff.close();
  gotoxy(55,24);
  cout<<"Press Any Key  to Continue";
  getch();
}

void main()
{  
 do
 {
  int a;
  clrscr();
  cout<<"\n\n\t\t  :: STUDENT INFORMATION SYSTEM ::";
  cout<<"\n   1.  Enter new record";
  cout<<"\n   2.  Display record";
  cout<<"\n   3.  Modify the record";
  cout<<"\n   4.  Delete student record";
  cout<<"\n   5.  Exit";
  cout<<"\n\n Enter the option:";cin>>a;

 switch(a)
 {
  case 1:clrscr();
	     char ch;
	     ofstream fout;
	     fout.open("student.txt",ios::app);
	     do
		 {
	      s1.getdata();
	      fout.write((char*)&s1,sizeof(s1));
	      gotoxy(10,20);
	      cout<<"  --- Record Added Successfully ----";
	      gotoxy(10,21);
	      cout<<"Do you want to add more record(y/n)\t";cin>>ch;
		 }while(ch=='y'||ch=='Y');
	     fout.close();
	     break;
  case 2:clrscr();
	     s1.display();
	     break;
  case 3:clrscr();
	     char find='n';
	     int r_n;
	     long pos;
	     fstream ff;
	     ff.open("student.txt",ios::in|ios::out);
	     cout<<"\n\n\t\t Enter the roll no. to modify:";
	     cin>>r_n;
	     while(!ff.eof())
	     {
		  pos=ff.tellg();
	      ff.read((char*)&s1,sizeof(s1));
	      if(s1.get_roll()==r_n)
	      {
           find='y';
	       s1.modifydata();
	       ff.seekg(pos);
	       ff.write((char*)&s1,sizeof(s1));
	       ff.close();
		   break;
	      }
	     }  
         if(find=='n')
	     {  clrscr();gotoxy(15,15);
	        cout<<"\n\nRecord not found";getch();
	     }
	     break;
  case 4:clrscr();
	     int stno;        //for rollno
	     char found ='f',confirm='n';
	     ifstream fi;
	     fi.open("student.txt",ios::in);
	     ofstream fo;
	     fo.open("tem.txt",ios::out);
	     cout<<"\n\n\t\tEnter the roll no. to delete:";cin>>stno;
	     while((!fi.read((char*)&s1,sizeof(s1))))
	     {
	      if(s1.get_roll()==stno)
	      {
	       s1.putdata();
	       found='y';
	       cout<<"\nAre you sure (y/n) :";cin>>confirm;
	       if(confirm=='n'||confirm=='N')
	       {
	        fo.write((char*)&s1,sizeof(s1));
	        cout<<"Abort by the user";
	        getch();  }
	       else
		   {  cout<<"\n Record Deleted!!"; getch();  }
	       break;
	      }  
         }
	     if(found=='f')
		 { cout<<"Record not found ";  getch(); }
	     fi.close();
	     fo.close();
	     remove("student.txt");
	     rename("tem.txt","student.txt");
	     break;
  case 5:exit(0);
  default:gotoxy(10,20);
	      cout<<" !!! Wrong choice  !!! ";
	      getch();
		  gotoxy(10,20); clreol();
}
}while(1);
}