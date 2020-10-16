#include<iostream>
using namespace std;
long gcd(long long a,long long b)
{
	long aa;
	if(b==0)
	{
		return a;
	}
	else
	{
		aa=a%b;
		return gcd(b,aa);	
	}
}
int main()
{
	long long a,b;
	cin>>a>>b;
	long long g=gcd(a,b);
	long long lcm=(a*b)/g;
	cout<<lcm;
}
