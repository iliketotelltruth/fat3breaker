#include<iostream>
using namespace std;

bool is_balance=true;

int g(){
	int l1, l2, r1, r2;	
	cin >> l1 >> l2 >> r1 >> r2;
	if(l1==0){
		l1 = g();
	}
	if(r1==0){
		r1 = g();
	}
	if(l1*l2!=r1*r2){
		is_balance = false;
	}
	return l1+r1;
}
main()
{
	int n;
	cin >> n;
	while(n--)
	{	
	is_balance=true;
		g();
		if(is_balance)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	
		if(n){
			cout << "\n";
	}
	
	}
	return 0;
}
