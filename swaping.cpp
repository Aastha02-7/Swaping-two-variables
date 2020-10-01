//Swaping two variable without using third variable
#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	long long int x,y;
	cout<<"Enter a value x= ";
	cin>>x;
	cout<<"Enter a value y= ";
	cin>>y;
	
	//Swaping Numbers
	x=x+y;
	y=x-y;
	x=x-y;
	
	//Printing Swaped Values
	cout<<"Values has been swaped x= "<<x<<" y= "<<y;
	
	return 0;
}
