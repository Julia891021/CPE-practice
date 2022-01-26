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
		for(int i = 0; i<t; i++)
		{
			for (int k = i; k<t; k++)
			{
				if(list[i]>list[k])
				{
					int tmp;
					tmp = list[i];
					list[i] = list[k];
					list[k] = tmp;
					ans++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<ans<<" swaps."<<endl;
	}
	return 0;
}
