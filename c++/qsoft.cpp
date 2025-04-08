#include<iostream>
using namespace std;

int num[1024];

void qsoft(int p, int q){
	int i, j;
	if(p>=q){
		return;
	}
	for(i=p, j=p+1;j<=q;j++){
		if(num[j]<num[p]){
			i++;
			swap(num[i], num[j]);
		}
	}
	swap(num[i], num[p]);
	qsoft(p, i-1);
	qsoft(i+1, q);
}
main(){
	int a, i;
	cin >> a;
	for(i=0;i<a;i++){
		cin >> num[i];
	}
	qsoft(0, a-1);
	for(int j=0;j<a;j++){
		cout << num[j]<< "\n";
	}
}
