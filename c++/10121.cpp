#include<iostream>
using namespace std;

int x[128];
main()
{
	int i, n, ans;
	cin >> n;
	ans=0;
	for(i=0;i<n;i++)
	{
		cin >> x[i];
	}
	for(i=0;i<n;i++)
	{
		ans+=x[i];
	}
	cout << ans <<"\n";
	return 0;
}
