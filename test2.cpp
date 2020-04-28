#include <iostream>
using namespace std;
int main()
{
	int a,i;
    cout<<"enter the value of a";;
    cin>>a;
	for(i=1; i<= 2*a; i++)
	{
		if(i%2 != 0)
		{
			cout<< i <<" , ";
		}
	}
	return 0;
}