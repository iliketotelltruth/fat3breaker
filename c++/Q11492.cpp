#include<iostream>
using namespace std;


int peo[10];
main(){
	int n, i, a, b;
	cin >> n;
	a=0;
	b=0;	
	cout << "Lumberjacks:\n";
	for(int j=0;j<n;j++){
		for(i=0;i<10;i++){
			cin >> peo[i];
		}
		for(i=0;i<9;i++){
			if(peo[i]>peo[i+1]){
				a++;
			}
			if(peo[i]<peo[i+1]){
				b++;
			}
		}
		if(a==9||b==9){
			cout <<"Ordered\n";
		}
		else{
			cout <<"Unordered\n";
		}
		a=0;
		b=0;
	}
	return 0;
}
