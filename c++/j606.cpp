#include<iostream>
using namespace std;

main(){
	int k, q, r;
	cin >> k >> q >> r;
	int tbl[q+1][k];
	int cbl[q+1][k];
	string x;
	cin >> x;
	for(int i=0;i<k;i++){
		cbl[0][i]=x[i];
	}
	for(int i=1;i<q+1;i++){
		for(int j=0;j<k;j++){
			cin >> tbl[i][j];
		}
	}
	for(int i=1;i<q+1;i++){
		for(int j=0;j<k;j++){
		cbl[i][tbl[i][j]-1]=cbl[i-1][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=1;j<q+1;j++){
			cout << (char)cbl[j][i];
		}
		cout <<"\n";
	}
	return 0;
}
