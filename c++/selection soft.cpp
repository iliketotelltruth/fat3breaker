#include<iostream>
using namespace std;

int num[1024];

main()
{
	int t, x, y, i, c;
	cin >> t;
	i=0;
	for(i=0;i<t;i++)
	{
		cin >> num[i];
	}
	for(i=0;i<t;i++)
	{
		for(x=i, y=i+1;y<t;y++)
		{
			if(num[x]>num[y])
			{
				x=y;
			}
		}	
		swap(num[i], num[x]);
	}
	for(c=0;c<t;c++){
		cout << num[c] <<" ";
	}
	return 0;
 } 
