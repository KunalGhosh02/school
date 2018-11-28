#include<iostream.h>
#include<conio.h>

void main()
 {
  clrscr();
  int a[30],n;
  void Sel_Sort(int a[25],int n);
  cout<<"\n How many data you want to enter:";
  cin>>n;
  cout<<"\n Enter "<<n<<" data:";
  for(int i=0;i<n;i++)
    cin>>a[i];

   cout<<"\n Normal Display:-\n";
   for(i=0;i<n;i++)
    cout<<"\t"<<a[i];

   cout<<"\n\n Press any key to sort:";
   Sel_Sort(a,n);
   getch();
 }
void Sel_Sort(int a[25],int n)
 {
  int i,j,s,p,t;
  for(j=0;j<n;j++)
   {
    s=a[j];
    for(i=j+1;i<n;i++)
     if(s>a[i])
      {
       s=a[i];
       p=i;


    t=a[j];
    a[j]=a[p];
    a[p]=t;  }
    cout<<"\n Display after pass "<<j+1<<":";
    for(i=0;i<n;i++)
     cout<<"\t"<<a[i];
   }
  getch();
  cout<<"\n\n Sorted Display:-";
  for(i=0;i<n;i++)
   cout<<"\t"<<a[i];
 }