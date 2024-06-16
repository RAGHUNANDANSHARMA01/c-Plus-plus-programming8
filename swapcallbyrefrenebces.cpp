#include<iostream>
using namespace std;
void swap(int*x,int*y)
{
    int swap;
    *x=swap;
    *x=*y;
    *y=swap;
}
int main()
{
    int x=500,y=400;
    swap(&x,&y);
    cout<<"value of x:"<<x<<endl;
    cout<<"value of y:"<<y<<endl;
    return 0;
}
