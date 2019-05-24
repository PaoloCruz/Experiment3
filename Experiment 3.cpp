#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int num[10], i, j,k,l;
	float tot, ave;
	
		cout<<"Enter 10 numbers:"<<endl;
		
	for(i=0;i<10;i++)
	{
		cin>>num[i];
		tot += num[i];
	}
		
	j=0;
	for(i=1;i<10;i++)
	{
		if (num[j]<num[i])
		{
			j=i;	
		}
		k=num[j];
	}
	cout<<"The largest number is: "<<k<<endl;
	j=0;
	for(i=1;i<10;i++)
	{
		if (num[j]>num[i])
		{
			j=i;	
		}
		l=num[j];
	}
  	cout<<"The smallest number is: "<<l<<endl;
	cout<<"The total is "<< tot<<endl;
	cout <<"The average is "<< tot/10<<endl;
	


_getch();
return 0;
}
