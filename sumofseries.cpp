#include<iostream>
using namespace std;
int main()
{
    int n;
    int result=0;
    cout<<"enter the N numbers:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0){
        result-=i;
    }
    else
    {
        result+=i;
    }
cout<<"sum of series is:"<<result<<endl;
    }
return 0;
}