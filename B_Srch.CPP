#include<iostream.h>
#include<conio.h>

void main()
 {
  clrscr();
  int a[100],n,x;
  void B_Search(int a[100],int n,int s);
  cout<<"\n How many data you want to enter:";
  cin>>n;
  cout<<"\n Enter "<<n<<" data:";
  for(int i=0;i<n;i++)
    cin>>a[i];

  clrscr();
  cout<<"\n Enter the data you want to search:";
  cin>>x;
  B_Search(a,n,x);
  getch();
 }

void B_Search(int a[100],int n,int s)
 {
  int l=0,u=n-1,m,p=0;
  while(l<=u)
   {
    m=(l+u)/2;
    if(a[m]==s)
      {
       p=m+1;
      }
    else
     if(a[m]<s)
       l=m+1;
     else
       u=m-1;

    if(p>0)
     {
      cout<<"\n"<<s<<" found at "<<p<<"th position";
      break;
     }
   }

  if(p==0)
   cout<<"\n No such data found";
 }