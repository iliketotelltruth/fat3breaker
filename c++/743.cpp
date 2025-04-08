#include <iostream>
using namespace std;

main()
{
	int l, total;
	cin >> l; 
	string a;
	total =0;
	for(int i=0; i<l; i++)
	{
		//0123
		cin >> a;
		for(int y=0, x=1;y<4;y+=2, x+=2)
		{
			total=total+(a[y]-48)*2/10;
		total=total+(a[y]-48)*2%10;
			total=total+a[x]-48;
		}
			cin >> a;
		for(int y=0, x=1;y<4;y+=2, x+=2)
		{
			total=total+(a[y]-48)*2/10;
		total=total+(a[y]-48)*2%10;
			total=total+a[x]-48;
		}		cin >> a;
		for(int y=0, x=1;y<4;y+=2, x+=2)
		{
			total=total+(a[y]-48)*2/10;
		total=total+(a[y]-48)*2%10;
			total=total+a[x]-48;
		}		cin >> a;
		for(int y=0, x=1;y<4;y+=2, x+=2)
		{
			total=total+(a[y]-48)*2/10;
		total=total+(a[y]-48)*2%10;
			total=total+a[x]-48;
		}
		if(total%10==0)
		{
			cout << "Valid\n";
		}
		else
		{
			cout << "Invalid\n";
		}
		total=0;
	}
	return 0;
 } 
