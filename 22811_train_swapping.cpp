#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i = 1; i<=n; i++)
	{
		int t;
		cin>>t;
		int list[t], ans = 0;
		for (int j = 0; j<t; j++)
		{
			cin>>list[j];	
		}
		for(int j = 0; j<t; j++)
		{
			for (int k = j; k<t; k++)
			{
				if(list[j]>list[k])
				{
					int tmp;
					tmp = list[j];
					list[j] = list[k];
					list[k] = tmp;
					ans++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<ans<<" swaps."<<endl;
	}
	return 0;
}
