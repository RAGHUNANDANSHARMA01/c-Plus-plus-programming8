#include<iostream>
using namespace std;
int main()
{
    int week;
    cout<<"enter the number:";
    cin>>week;
    switch (week)
    {
    case 1:
    cout<<"monday";
        break;
    case 2:
    cout<<"tuesday";
    break;
    case 3:
    cout<<"wednesday";
    break;
    case 4:
    cout<<"thursday";
    break;
    case 5:
    cout<<"friday";
    break;
    case 6:
    cout<<"satursday";
    break;
    case 7:
    cout<<"sunday";
    break;
    default:
    cout<<"not choice";
        break;
    }
    return 0;
}