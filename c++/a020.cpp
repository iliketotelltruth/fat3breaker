#include<iostream>
using namespace std;


string num = "0123456789ABCDEFGHJKLMNPQRSTUVXYWZIO";
string x;
long long tbl[1024];
long long i;

	main()
	{
		for(i=0;i<num.size();i++)
{
	tbl[num[i]]=i;
}
	long long y=0;
		cin >> x;
	y = tbl[x[0]];
	long long ans=y/10;
	ans+=(y%10)*9;
	for(int j=1;j<=9;j++)
	{
		if(9-j!=0)
		{
		ans+=(tbl[x[j]]*(9-j));
		}
		else
		{
			ans+=tbl[x[j]];
		}
	}
	if(ans%10==0)
	{
		cout << "real\n";
	}
	else
	{
		cout << "fake\n";
	}
	return 0;
}
