#include<iostream>
using namespace std;
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=34;
    int b=23;
    swap(&a,&b);
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of b is:"<<b<<endl;
    return 0;
}

// #include<iostream>
// using namespace std;
// void swap(int*a,int*b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main()
// {
//     int a=55;
//     int b=44;
//     swap(&a,&b);
//     cout<<"the value of a is:"<<a<<endl;
//     cout<<"the value of b is:"<<b<<endl;
//     return 0;
// }