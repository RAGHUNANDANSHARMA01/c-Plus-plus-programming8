#include<iostream>
using namespace std;
int main()
{
	int a=20,b=39,temp;
	cout<<"before swapping:";
	cout<<a<<b;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping:";
	cout<<a<<b;
	return 0;
}
