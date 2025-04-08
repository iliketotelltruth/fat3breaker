#include<iostream>
using namespace std;

main()
{
	int  i, j, d;
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
			d = 0;
			while(num!=1)
			{ 
				if(num%2==0)
				{
					num=num/2;
					d++;
				}
				else
				{
					num=num*3;
					num++;
					d++;
				}
			} 
			d++;
			if(d>big)
			{
				big = d;
			}
		}
		cout << big <<"\n";
	}
	return 0;
}
