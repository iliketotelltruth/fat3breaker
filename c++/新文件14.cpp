#include<iostream>
using namespace std;

int d[1000000];
main()
{
	freopen("a.txt", "w", stdout);
	int  i, j;
	long long big;
	while (cin >> i >> j)
	{
		big = 0;
		cout << i << " " << j << " ";
		if(i>j)
		{
			swap(i, j);
		}
		for(int k=i;k<=j;k++)
		{
			int num = k;
			while(num!=1)
			{ 
				if(num%2==0)
				{
					num=num/2;
					d[k]++;
				}
				else
				{
					num=num*3;
					num++;
					d[k]++;
				}
			} 
			 d[k]++;
			if(d[k]>big)
			{
				big = d[k];
			}
		}
		cout << big <<"\n";
		big = 0;
	}
	return 0;
}
