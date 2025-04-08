#include<iostream>
using namespace std;

int n[2000000];
int sum[2000000];
main()
{
	int N, i, Q;
	cin >> N;
	for(i=1;i<=N;i++)
	{
		cin >> n[i];
		sum[i]=n[i]+sum[i-1];
	}
	cin >> Q;
	int a, b, ans, j;
	for(i=1, ans=0;i<=Q;i++,ans=0)
	{
		cin >> a >> b;
		j=0;
		while(j<a)
		{
		ans=sum[b]-=n[j];
			j++;
		}
		cout << ans <<"\n";
	}
	return 0;
}
