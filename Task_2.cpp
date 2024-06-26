#include<iostream>
using namespace std;
int main()
{
char n;
int a,b;
cout<<"enter any operation \n1.+\n2.-\n3.*\n4./\n5.%\n";
cin>>n;
cout<<"enter the value of a and b\n";
cin>>a>>b;
switch (n)
{
	case '+':
		cout<<"a+b:"<<a+b;
		break;
	case '-':
		cout<<"a-b:"<<a-b;
		break;
	case '*':
		cout<<"a*b:"<<a*b;
		break;
	case '/':
		cout<<"a/b:"<<a/b;
		break;
	case '%':
		cout<<"a%b:"<<a%b;
		break;
	default:
	cout<<"invalid operation";
	break;
	}	
	return 0;
}


