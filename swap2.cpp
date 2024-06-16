  //#include<iostream>
//using namespace std;
//int main()
//{
   // int a=10,b=30;
   // int temp;
   // temp=a;
  //  a=b;
  //  b=temp;
  //  cout<<"after swapping :"<<a<<" "<<b<<endl;
  //  return 0;
//}


#include<iostream>
using namespace std;
void swap(int a,int b);
int main()
{
    int a=23,b=45;
    int temp;
    temp=a;
    a=b;
    b=temp;
    swap(a,b);
    cout<<"after swapping:"<<a<<" "<<b<<endl;
    return 0;
}