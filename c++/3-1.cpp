#include<iostream>
using namespace std;

int ans[1679616];
main()
{
	int n, t, max, i, c, x, j;
	cin >> n >> t;
	for(c=0,i=0;i<n;i++)
	{
		c *= 6;
	}
	for(max=0,j=0;j<c;j++)
	{
		x=j;
		while(true)
		{		
			if(x<6)
		{
			ans[j]+=x;
			break;
		}
			ans[j]+=x%6;
			x/=6;
		}
		ans[j]+=n;
		if(ans[j]>=t)
		{
			max++;	
		}
	}
	cout << max <<"\n";
	return 0;
}
