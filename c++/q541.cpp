#include<iostream>
using namespace std;

int x[1024];
int y[1024];
main(){
	int n;
	while(cin >> n){
		if(n==0){
			break;
		}
	int a, b, c, d;
	a=0;
	b=0;
	c=0;
	d=0;
	int tbl[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> tbl[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		x[i]+=tbl[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		y[i]+=tbl[j][i];
		}
	}
	for(int i=0;i<n;i++){
		if(x[i]%2!=0){
			a++;
			c=i;
		}
		if(y[i]%2!=0){
			b++;
			d=i;
		}
	}
	if(a==1&&b==1){
		cout << "Change bit (" << c+1 <<"," << d+1 <<")\n"; 
	}
	else if(a>1||b>1){
		cout << "Corrupt\n";
	}
	else{
		cout << "Ok\n";
	}
	for(int i=0;i<n;i++){
		x[i]=0;
		y[i]=0;
	}
}
	return 0; 
}
