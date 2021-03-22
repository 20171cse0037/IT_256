#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<process.h>



void main()
{
clrscr();
randomize();

int i, a=33, b=12, r;
for (i=0; i<15; i++)
	{
	r = random (501)+100;
	gotoxy(37,14);
	cout<<"LOADING";
	gotoxy(a++,b);
	cout<<"|";
	delay(r);
	}
clrscr();

char ch[200]="*";
char ch2[1]="-";


gotoxy(32,14);
cout<<"Press any KEY to proceed: ";
while (!kbhit());
getche();

clrscr();
cout<<"Instructions:" <<endl
    <<"1. Press 'w' to move up, 'a' to move left, " <<endl
    <<"   's' to move down, and 'd' to move right."<<endl
    <<"2. You have to catch the star which is static on the screen. "<<endl
    <<"3. Star can catch only if it will hit by moving star."<<endl
    <<"4. 5 Points were given for catching 1 star." <<endl
    <<"5. If you hit the boundries of the screen we will die!!!!"<<endl
    <<"6. Plz turn off your CAPS LOCK button.";


cout<<"\n \n \nPress any KEY to start the game: ";
while (!kbhit());



int x, y, score;
char m, n;


start3:
getche();
x=2;
y=3;
i=0;
score=0;
m='z';




start2:
while(i<1)

	{
	clrscr();
	a= random(77)+2;
	b= random(22)+2;



	for ( ;!kbhit(); )
		{
		start:
		clrscr();
		gotoxy(a,b);
		cout<<"*";
		if (m=='a')
			{
			gotoxy(x--,y);
			puts (ch);
			}
		else
		   if (m=='d')
			{
			gotoxy(x++,y);
			puts (ch);
			}
		else
		   if (m=='w')
			{
			gotoxy(x,y--);
			puts (ch);
			}
		else
		   if (m=='s')
			{
			gotoxy(x,y++);
			puts (ch);
			}
		else
			{
			gotoxy(x++,y);
			puts (ch);
			}

			delay(100);

		if (x==a && y==b)
		   {
		   score++;
		   strcat(ch,ch2);
		   goto start2;
		   }

		if (x==1 || x== 81 || y==1 || y==25)
		   {
		   i=1;
		   break;
		   }
		clrscr();

		}

		if(i==1)
		break;

		m=getche();
		goto start;


	}
//getche();
clrscr();
cout<<"You are DEAD!!!"<<endl;
cout<<"Your score is : "<<score*5;
gotoxy(32,14);

cout<<"Do u want to play again (y/n):";
cin>>n;
if ( n == 'y')
goto start3;

clrscr();
//gotoxy(32,14);
cout<<"\nPress any KEY to close:\a";
while (!kbhit());




getch();
}







