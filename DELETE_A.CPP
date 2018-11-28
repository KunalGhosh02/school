#include<iostream.h>
#include<conio.h>

void main()
 {
  clrscr();
  int a[100],n,x;
  void Delete(int a[75],int data,int n);
  cout<<"\n How many data you want to enter:";
  cin>>n;
  cout<<"\n Enter "<<n<<" data:";
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<"\n What data you want to delete:";
  cin>>x;

  cout<<"\n Original Array:-\n";
  for(i=0;i<n;i++)
    cout<<"\t"<<a[i];

  Delete(a,x,n);
  getch();
 }
void Delete(int a[75],int data,int n)
 {
  int p=0,x=0;
  char ch;
  if(n>0)
   {
    for(int i=x;i<n;i++)
     if(a[i]==data)
      {
       cout<<"\n Are you sure you want to delete "<<data<<":";
       cin>>ch;
       if((ch=='Y')||(ch=='y'))
	{
	 for(int j=i;j>x;j--)
	  a[j]=a[j-1];
	 a[x]=data;
	 ++x;
	 ++p;
	}

      }

    if(p==0)
     cout<<"\n Data not found";
    cout<<"\n Array after deletion:-\n";
    for(i=x;i<n;i++)
     cout<<"\t"<<a[i];
   }
  else
   cout<<"\n No data in array";
 }