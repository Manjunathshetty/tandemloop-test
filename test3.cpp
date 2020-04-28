#include<iostream>
using namespace std;
int main()
{
	int a,j;
    cout<<"enter the value of a";;
    cin>>a;

while(a%2!=0)
{
    for(j=1; j<= 2*a; j++)
	{
		if(j%2 != 0)
		{
			cout<< j <<" , ";
		}

	}
	cout<<j<<",";
}
	return 0;
}