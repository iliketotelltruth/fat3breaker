#include <iostream>
using namespace std;


stair(int n)
{
	if(n<=1)
	{
		return 1;
	}
	return stair(n-1)+stair(n-2);
 } 
 main(){
 	int x;
 	cin >> x;
 	cout << stair(x);
 	return 0;
 }
