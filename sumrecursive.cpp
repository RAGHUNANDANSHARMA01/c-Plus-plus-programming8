#include<iostream>
using namespace std;
int f(int n)
{
    if(n<=9 and n>=0)
    return n;
    return (n/10) +(n%10);
}
int main()
{
    int result=f(200);
    cout<<result;
    return 0;
}