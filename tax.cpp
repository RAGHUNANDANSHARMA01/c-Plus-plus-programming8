#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    if(num<100)
    {
        cout<<"not tax";
    }
    else if(num=100)
    {
        cout<<"10% tax";
    }
    else
    {
        cout<<"25% tax";
    }
    return 0;
}
