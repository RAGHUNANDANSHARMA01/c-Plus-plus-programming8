#include<iostream>
using namespace std;
int main()
{
    int a=23,b=34,temp;
    cout<<"before swapping:\n";
    cout<<a<<b;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping :\n";
    cout<<a<<b;
    return 0;
}