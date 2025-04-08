#include <iostream>
using namespace std;

int x[100000];
main()
{
	int n, m, i;
	cin >> n >> m;
	for(i=0;i<n;i++)
	{
		x[0]=0;
		x[1]=1;
		if(n>=2)
		{
			x[i+2]=x[i+1]+x[i];
		}
	}
	cout << x[n]%m <<"\n";
	return 0;
}
