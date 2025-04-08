#include<iostream>
using namespace std;

int block[1024];
main()
{
	int t, low, high, j, mas, n;
	cin >> t;
	for(int i=1;i<=t;i++)
	{
		low=0;
		high=0;
		cin >> n;
		for(j=0;j<n;j++)
		{
			cin >> block[j];
		}
			for(j=0;j<n-1;j++)
			{
				int f=j;
					if(block[f]>block[f+1])
					{
						low++;
					}
					if(block[f]<block[f+1])
					{
						high++;
					}
			}
		cout << "Case " << i << ": " << high << " " << low<<"\n"; 
	}
	return 0;
}
