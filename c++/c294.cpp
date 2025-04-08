#include<iostream>
using namespace std;

main(){
	string x;
	int a=0;
	int b=0;
	cin >> x;
	for(int i=0;i<x.length();i+2){
		a+=x[i];
	}
	for(int j=1;j<x.length();j+2){
		b+=x[j];
	}
	a-=b;
	if(a<0){
		a=-a;
	}
	cout << a;
	return 0;
}
