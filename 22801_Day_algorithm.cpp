#include <iostream>
using namespace std;

void check(int m, int d)
{
	if(m == 1||m ==10)
		{
			if(d%7==1)
				cout<<"Saturday"<<endl;
			else if(d%7==2)
				cout<<"Sunday"<<endl;
			else if(d%7==3)
				cout<<"Monday"<<endl;
			else if(d%7==4)
				cout<<"Tuesday"<<endl;
			else if(d%7==5)
				cout<<"Wednesday"<<endl;
			else if(d%7==6)
				cout<<"Thursday"<<endl;
			else
				cout<<"Friday"<<endl;
		}
		else if(m == 2||m == 3||m == 11)
		{
			if(d%7==1)
				cout<<"Tuesday"<<endl;
			else if(d%7==2)
				cout<<"Wednesday"<<endl;
			else if(d%7==3)
				cout<<"Thursday"<<endl;
			else if(d%7==4)
				cout<<"Friday"<<endl;
			else if(d%7==5)
				cout<<"Saturday"<<endl;
			else if(d%7==6)
				cout<<"Sunday"<<endl;
			else
				cout<<"Monday"<<endl;
		}
		else if(m == 4||m == 7)
		{
			if(d%7==5)
				cout<<"Tuesday"<<endl;
			else if(d%7==6)
				cout<<"Wednesday"<<endl;
			else if(d%7==0)
				cout<<"Thursday"<<endl;
			else if(d%7==1)
				cout<<"Friday"<<endl;
			else if(d%7==2)
				cout<<"Saturday"<<endl;
			else if(d%7==3)
				cout<<"Sunday"<<endl;
			else
				cout<<"Monday"<<endl;
		}
		else if(m == 5)
		{
			if(d%7==3)
				cout<<"Tuesday"<<endl;
			else if(d%7==4)
				cout<<"Wednesday"<<endl;
			else if(d%7==5)
				cout<<"Thursday"<<endl;
			else if(d%7==6)
				cout<<"Friday"<<endl;
			else if(d%7==0)
				cout<<"Saturday"<<endl;
			else if(d%7==1)
				cout<<"Sunday"<<endl;
			else
				cout<<"Monday"<<endl;
		}
		else if(m == 6)
		{
			if(d%7==0)
				cout<<"Tuesday"<<endl;
			else if(d%7==1)
				cout<<"Wednesday"<<endl;
			else if(d%7==2)
				cout<<"Thursday"<<endl;
			else if(d%7==3)
				cout<<"Friday"<<endl;
			else if(d%7==4)
				cout<<"Saturday"<<endl;
			else if(d%7==5)
				cout<<"Sunday"<<endl;
			else
				cout<<"Monday"<<endl;
		}
		else if(m == 8)
		{
			if(d%7==2)
				cout<<"Tuesday"<<endl;
			else if(d%7==3)
				cout<<"Wednesday"<<endl;
			else if(d%7==4)
				cout<<"Thursday"<<endl;
			else if(d%7==5)
				cout<<"Friday"<<endl;
			else if(d%7==6)
				cout<<"Saturday"<<endl;
			else if(d%7==7)
				cout<<"Sunday"<<endl;
			else
				cout<<"Monday"<<endl;
		}
		else
		{
			if(d%7==6)
				cout<<"Tuesday"<<endl;
			else if(d%7==0)
				cout<<"Wednesday"<<endl;
			else if(d%7==1)
				cout<<"Thursday"<<endl;
			else if(d%7==2)
				cout<<"Friday"<<endl;
			else if(d%7==3)
				cout<<"Saturday"<<endl;
			else if(d%7==4)
				cout<<"Sunday"<<endl;
			else
				cout<<"Monday"<<endl;
		}
}

int main()
{
	int n;
	cin>>n;
	for(int i = 1; i<=n; i++)
	{
		int m, d;
		cin>>m>>d;
		check(m, d);
	}
	return 0;	
} 
