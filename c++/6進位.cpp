#include<iostream>
using namespace std;



	int fac(int a)
	{
		if(a==0)
		{
			return 1;
		}
		return fac(a-1) * a;
	}
main()
{
	int a, b;
	cin >> a;
	b = fac(a);
	cout << b;
}
