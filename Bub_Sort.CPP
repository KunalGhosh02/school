#include<iostream.h>
#include<conio.h>

void main()
 {
  clrscr();
  int a[30],n;
  void Bub_Sort(int a[30],int n);
  cout<<"\n How many data you want to enter:";
  cin>>n;
  cout<<"\n Enter "<<n<<" data:";
  for(int i=0;i<n;i++)
    cin>>a[i];

   clrscr();
   cout<<"\n Normal Display:-\n";
   for(i=0;i<n;i++)
    cout<<"\t"<<a[i];

   cout<<"\n\n Press any key to sort:";
   getch();
   clrscr();
   Bub_Sort(a,n);
   getch();
 }
void Bub_Sort(int a[30],int n)
 {
  int temp,i,j;

  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     if(a[j]>a[j+1])
      {
       temp=a[j+1];
       a[j+1]=a[j];
       a[j]=temp;
      }

    cout<<"Display after pass "<<i+1<<":-\n";
    for(j=0;j<n;j++)
     cout<<a[j]<<"\t";
   }
  getch();
  cout<<"\n Display after sorting:-";
  for(i=0;i<n;i++)
   cout<<"\t"<<a[i];
 }