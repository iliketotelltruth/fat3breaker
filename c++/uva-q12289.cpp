#include<iostream>
using namespace std;
main()
{
	string y;
	int x, i;
	cin >> x;
	for(i=0;i<x;i++)
	{
		cin >> y;
		if(y.size()==3)
		{
			if(((y[0]=='o'&&y[1]=='n')||(y[0]=='o'&&y[2]=='e'))||(y[1]=='n'&&y[2]=='e'))
			{
				cout << "1\n";
			}
			else
			{
				cout <<"2\n";
			}
		}
		else
		{
			cout << "3\n";
		}
	}
	return 0;
}
