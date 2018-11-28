//program to input data in 1d array by user and search a element using linear search.
#include<iostream.h>
#include<conio.h>
 void main()
 {
 clrscr();
 int i,n,a[20],data;
 void lsearch(int a[20],int n,int data);
 cout<<"\n how many data you want to enter:";
 cin>>n;
 cout<<"\n enter:"<<n<<":data"<<endl;
 for(i=0;i<n;i++)
 cin>>a[i];
 cout<<"\n enter data to be searched:";
 cin>>data;
 lsearch(a,n,data);
 getch();
 }
 void lsearch(int a[20],int n, int data)
 {
 int i,p;
 p=-1;
 for(i=0;i<n;i++)
 {
 if(data==a[i])
 p=i;
 }
 if(p!=0)
 cout<<"\n data found at"<<p+1<<"position";
 else
 cout<<"\n data not found";
 }