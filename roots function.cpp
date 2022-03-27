#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x1,x2,a,b,c,y;
	cout<<"to calculate the roots of quadratic equations enter your values"<<endl;
	cin>>a>>b>>c;
	y=sqrt(b*b)-4*a*c;
	x1=-b+y/2*a;
	x2 = -b-y/2*a;
	cout<<"x1 = "<<x1<<endl;
	cout<<"x2 = "<<x2<<endl; 
	return 0;
}
