#include <iostream>
 using namespace std;
int main()
{
	float a,b,c;
	cout<<"To calculate the whole square of two terms enter your values"<<endl;
	cin>>a;
	cin>>b;
	c=(a-b)*(a-b);
	c = a*a-2*a*b+b*b;
	cout<<"(a-b)^2 ="<<c<<endl;
	return 0;
}
