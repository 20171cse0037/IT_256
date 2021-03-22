#include<iostream.h>
#include<conio.h>
#include<process.h>
main()
{
clrscr();
int a[3],n,ch;
char choice;
cout<<"enter the size of the array";
cin>>n;
cout<<"for sorting ";
cout<<"enter the elements of the array";
for(int i=0; i<n;i++)
cin>>a[i];
for (i=0;i<n;i++)
{
cout<<a[i];
cout<<"\n";
}
/*cout<<"check wether your output is same as entered \npress y if yes and n for no";
cin>>choice;
if(choice=='y')
//exit(0);
else
{
cout<<"enter the array again";
for(i=0;i<n;i++)
{
cin>>a[i];
}
} */
cout<<"enter 1 for ascending \nenter 2 for descending";
cin>>ch;
switch(ch)
{
case 1: cout<<"welcome to ascending sorting";
	int m;
	for(i=0;i<n;i++)
	{
	if(a[i]>a[i+1])
	{
	 m=a[i];
	 a[i]=a[i+1];
	 a[i+1]=m;
	}
	else
	{
	continue;
	}
	}
}
getch();
}