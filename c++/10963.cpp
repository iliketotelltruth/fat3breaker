#include <iostream>
using namespace std;

int a[1024];
int b[1024];
int main() {
    bool suc=true;
int n, w, x;
cin >> n;
	x=n;
    for(int i=0;i<n;i++){
        cin >> w;
        for(int j=0;j<w;j++){
            cin >> a[j] >> b[j];
        }
        int x=a[0]-b[0];
    for(int i=1;i<w;i++){
        if(a[i]-b[i]!=x){
            suc=false;
        }
    }
    if(suc){
        cout << "yes\n";
    }
    else{
        cout <<"no\n";
    }
	if(x>0){
		   cout << "\n";
	}
	x--;
    suc=true;
    }
    return 0;
}
