#include<iostream>
using namespace std;


int n[1024];
main()
{
	int i, x;
	cin >> x;
	i=0;
	while(i<x)
	{
		cin >> n[i];
		i++;
	}
	int max, second;
	second = 0;
	max = second;
	for(i=0;i<x; i++)
	{
		if(n[i]>max)
		{
			max=n[i];
		}
	}
	for(i=0;i<x; i++)
	{
		if(max==n[i])
		{
			n[i]=0;
		}
	}
	for(i=0;i<x; i++)
	{
		if(n[i]>second)
		{
			second=n[i];
		}
	}
	cout << "Second: " << second << "\n";
}
