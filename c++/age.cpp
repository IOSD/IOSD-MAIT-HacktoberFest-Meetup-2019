#include<iostream>
using namespace std;

int main()
{
	int age;

	cout<<"Enter your age: ";
	cin>>age;
	if(age>=18)
	{
		cout<<"Personl is eligible for voting"<<endl;
	}
	else
	{
		cout<<"Person is not eligible for voating"<<endl;
	}

	return 0;
}
