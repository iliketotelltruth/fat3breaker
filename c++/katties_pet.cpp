#include<iostream>
using namespace std;

int player[10];

main()
{
	int s, p, num;
	p=0;
	num=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
		cin >> s;
		player[i]=player[i]+s;
		}
		if(player[i]>p){
			p=player[i];
			num = i+1;
		}
	}
	cout << num << " " << p << "\n";
	return 0; 
 } 
