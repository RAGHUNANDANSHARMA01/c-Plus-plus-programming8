#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    double avg,tot;
    cout<<"enter the five number:";
    cin>>a>>b>>c>>d>>e;
    tot=a+b+c+d+e;
    avg=tot/5;
    cout<<"tot:"<<tot<<endl;
    cout<<"avg:"<<avg<<endl;
    return 0;
}