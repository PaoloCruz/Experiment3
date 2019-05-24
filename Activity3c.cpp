#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int c,d,e,f;
	
		cout<<"How many Characters?: ";cin>>c;
		char b[c];
		cout<<"Input the characters: "<<endl;
		
		for(d=0;d<c;d++)
		{
			cin>>b[d];
		}
		cout<<endl<<"There are "<<c<<" characters."<<endl;
		cout<<"The characters in reverse order is:";
		for(d=c;d>=0;d--)
		{
			cout<<b[d];
		}

_getch();
return 0;
		
}
