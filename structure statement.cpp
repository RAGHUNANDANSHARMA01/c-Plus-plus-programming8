#include<iostream>
using namespace std;
struct stu
{
	int roll;
	char name[20];
	float marks;
};
int main()
{
struct stu s;
cout<<"enter student roll:";
cin>>s.roll;
cout<<"enter student name:";
cin>>s.name;
cout<<"enter student marks:";
cin>>s.marks;
cout<<s.roll<<endl;
cout<<s.name<<endl;
cout<<s.marks<<endl;
return 0;
}
