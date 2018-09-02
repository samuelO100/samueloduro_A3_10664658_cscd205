#include<iostream>
using namespace std;
int main()
{
	int mark;
	cout<<"Input your mark:"<<endl;
	cin>>mark;
	if(mark==100, mark > 80)
	{
		cout<<"Grade A";
	}
	else if (mark<=79, mark>=75)
	{
		cout<<"Grade B+";
	}
	else if (mark<=74, mark>=70)
	{
		cout<<"Grade B";
	}
	else if (mark<=69, mark>=65)
	{
		cout<<"Grade C+";
	}
	else if (mark<=64, mark>=60)
	{
		cout<<"Grade C";
	}
	else if (mark<=59, mark>=55)
	{
		cout<<"Grade D+";
	}
	else if (mark<=54, mark>=50)
	{
		cout<<"Grade D";
	}
	else if (mark<=49, mark>=45)
	{
		cout<<"Grade E";
	}
	else if (mark<=44, mark>=0)
	{
		cout<<"Grade F";
	}
	return 0;	
}
