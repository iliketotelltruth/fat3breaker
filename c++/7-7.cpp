#include<algorithm>
#include<iostream>
using namespace std;

int x[1024];
int y[1024];
main(){
	bool is_equal=true;
	int a, b;
	cin >> a >> b;
	for(int i=0;i<a;i++){
		cin >> x[i];
	}
	for(int j=0;j<b;j++){
		cin >> y[j];
	}
	sort(x+0, x+a);
	sort(y+0, y+b);
	if(a<b){
		swap(a, b);
	}
	for(int k=0;k<a;k++){
		if(x[k]!=y[k]){
			is_equal=false;
		}
	}
	if(is_equal){
		cout << "equal\n";
	}
	else{
		cout << "not equal\n";	
	}
	return 0;
}
