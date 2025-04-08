#include <iostream>
using namespace std;


stair(int n)
{
	if(n<=2)
	{
		return 1;
	}
	if(n<=3)
	{
		return 2;
	}
	return stair(n-1)+stair(n-3)+stair(n-4);
 } 
 main(){
 	int x;
 	cin >> x;
 	cout << stair(x);
 	return 0;
 }
