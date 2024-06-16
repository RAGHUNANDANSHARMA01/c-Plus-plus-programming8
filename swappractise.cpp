#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    a=temp;
    a=b;
    b=temp;
}
int main()
{
    int a=400,b=300;
    swap(a,b);
    cout<<"value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
    return 0;
}