#include<iostream.h>
#include<conio.h>

void main()
 {
  clrscr();
  int a[30],n;
  void Ins_Sort(int a[30],int n);
  cout<<"\n How many data you want to enter:";
  cin>>n;
  cout<<"\n Enter "<<n<<" data:";
  for(int i=0;i<n;i++)
    cin>>a[i];

 cout<<"\n Original Array:-\n";
   for(i=0;i<n;i++)
    cout<<"\t"<<a[i];

   cout<<"\n\n Press any key to sort:";
   getch();
   Ins_Sort(a,n);
   getch();
 }
void Ins_Sort(int a[30],int n)
 {
  int i,j,s;
  a[-1]=-32768;
  for(i=0;i<n;i++)
   {
    s=a[i];
    for(j=i-1;a[j]>s;j--)
      a[j+1]=a[j];

    a[j+1]=s;
    cout<<"\n Display after pass "<<i+1<<":";
    for(j=0;j<n;j++)
     cout<<"\t"<<a[j];
   }
  getch();
  cout<<"\n\n Sorted Array:-";
  for(i=0;i<n;i++)
   cout<<"\t"<<a[i];
 }