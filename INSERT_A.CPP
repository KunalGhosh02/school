#include<iostream.h>
#include<conio.h>

void main()
 {
  clrscr();
  int size=100;
  int a[100],n,x;
  void Insert(int a[100],int n,int data,int size);
  cout<<"\n How many data you want to enter:";
  cin>>n;
  cout<<"\n Enter "<<n<<" data:";
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<"\n Enter data you want to insert:";
  cin>>x;
  cout<<"\n Original Array:-\n";
  for(i=0;i<n;i++)
    cout<<"\t"<<a[i];

  Insert(a,n,x,size);
  getch();
 }
void Insert(int a[100],int n,int data,int size)
 {
  int p;

  if(n<size)
   {
    for(int i=0;i<n;i++)
     if((a[i]>data)&&(a[i-1]<data))
      p=i;

    if(a[0]>data)
     p=0;
    if(a[n-1]<data)
     p=n;
    for(i=n;i>=p;i--)
     a[i+1]=a[i];

    a[p]=data;
    ++n;
    cout<<"\n Array after insertion:-\n";
    for(i=0;i<n;i++)
     cout<<"\t"<<a[i];
   }
  else
   cout<<"\n No space to insert data";
 }