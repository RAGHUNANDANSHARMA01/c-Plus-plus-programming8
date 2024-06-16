#include<iostream>
using namespace std;
template<class t>
class calculator
{
	private:
		t num1,num2;
		public:
			calculator(t n1, t n2)
			{
			num1=n1;
			num2=n2;
		}
		void displayresult()
		{
			cout<<"number:"<<num1<<"and"<<num2<<"."<<endl;
			cout<<num1<<"+"<<num2<<"="<<add()<<endl;
			cout<<num1<<"-"<<num2<<"="<<sub()<<endl;
			cout<<num1<<"*"<<num2<<"="<<mult()<<endl;
			cout<<num1<<"/"<<num2<<"="<<divi()<<endl;
		}
		t add()
		{
			return num1+num2;
		}
		t sub()
		{
			return num1-num2;
		}
		t mult()
		{
			return num1*num2;
		}
		t divi()
		{
			return num1/num2;
		}
		};
		int main()
		{
		calculator<int>intcalc(2,3);
		calculator<float>floatcalc(2.1,3.2);
		cout<<"int results:"<<""<<endl;
		intcalc.displayresult();
		cout<<endl;
		cout<<"float results:"<<""<<endl;
		floatcalc.displayresult();
		return 0;
	}

