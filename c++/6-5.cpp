#include<iostream>
using namespace std;

int b;
int fib(int n){
	b++;
	if(n<=1)
	{
	return n;
	return b;
	}
	return fib(n-1) + fib(n-2);
}
main()
{
	int a;
	cin >> a;
	fib(a);
	cout << b;
	return 0;
}
