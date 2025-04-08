#include<iostream>
using namespace std;

int x, y;
int a=0;
void c(int x, int y)
{
	while(x/y!=0)
	{
		 x=x/y;
		 a=a+1;
	}
}
main(){
	cin >> x >> y;
	c(x, y);
	cout << a+1;
	return 0;
}
