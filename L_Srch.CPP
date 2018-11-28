#include<iostream.h>
#include<conio.h>

void main()
 {
  clrscr();
  int a[25],n,x;
  void L_Search(int a[25],int n,int s);
  cout<<"\n How many data you want to enter:";
  cin>>n;
  cout<<"\n Enter "<<n<<" data:";
  for(int i=0;i<n;i++)
    cin>>a[i];

  clrscr();
  cout<<"\n Enter the data you want to search:";
  cin>>x;
  L_Search(a,n,x);
  getch();
 }
void L_Search(int a[25],int n,int s)
 {
  int p=0;
  for(int i=0;i<n;i++)
   if(a[i]==s)
    {
     cout<<"\n";
     p=i+1;
     cout<<s<<" found at "<<p<<" position";
    }

  if(p==0)
   cout<<"\n No such data found";
 }