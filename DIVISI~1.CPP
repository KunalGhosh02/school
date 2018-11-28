//WAP to input data into dimensional array by the user and display only divisible by 5 and 2
#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j,r,c,a[5][5];
	cout<<"\n How many row do you want:";
	cin>>r;
	cout<<"\n How many column do you want:";
	cin>>c;
	cout<<"\n Enter data for the array:-\n";
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>a[i][j];
	cout<<"\n Display of Array:-";
	for(i=0;i<r;i++)
	{
		cout<<"\n";
		for(j=0;j<c;j++)
			cout<<"\t"<<a[i][j];
	}
	cout<<"\n Display of elements divisible by 2 and 5:-\n";
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			if((a[i][j]%2==0)&&(a[i][j]%5==0))
				cout<<"\t"<<a[i][j];
	getch();
}