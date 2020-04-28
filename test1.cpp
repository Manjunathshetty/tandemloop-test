#include<iostream>
using namespace std;
int main()
{
	double a,b;
	char operation;
	cout << "enter the numbers";
	cin >> a >> b;

	cout<< " enter the operation to be performed(+,-,*,/ only):";
	 cin>>operation;

	  switch(operation)
	  {
	  	case '+':
	  	          cout<<a+b;
	  	          break;

	  	case '-':
	  	         cout<<a-b;
	  	         break;
	  	case '*':
	  	         cout<<a*b;
	  	         break;
	  	case  '/':
	  	          cout<<a/b;
	  	          break;
	  	default :
	  	         cout<< invalid operators use metioned operators oly;
	  	         break;

	  	                	  }
return 0;
}