#include<iostream>
#include<string>
using namespace std;
int main()
{
	float Baths;
	float b;
	float c;
	cout<<" Enter Baths : "<<endl;
	cin>> Baths ;
	b = Baths*0.033;
	c = Baths*0.029;
	cout<<" Dollars."<<b<<endl;
	cout<<" Euro."<<c<<endl;
	return(0);
}