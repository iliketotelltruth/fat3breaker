#include<iostream> 
#include<vector>
#include<cmach>
using namespace std;

main(){
	vector<int> r;
	int n, ans;
	while(cin >> n)r.push_back(n);
	for(int i=0;i<r.size();i++){
		int first = r[0];
		if(r[i]%2==1){
			if(r[i+1]==0&&r[i+2]==0&&r[i+3]==0&&i+4!=r.size()){
				ans+=abs(r[0]-r[i+4]);
				i+=4;
			}
			ans+=abs(r[i]-r[i+1]);
			ans+=abs(r[i]-r[i+2]);
			ans+=abs(r[i]-r[i+3]);
			i+=4;
		}
		else{
			if(r[i+1]==0&&r[i+2]==0&&i+3!=r.size()){
				ans+=abs(r[0]-r[i+3]);
				i+=3;
			}
			ans+=abs(r[i]-r[i+1])
			ans+=abs(r[i]-r[i+2])
			i+=3;
		}
	}
	return 0;
}
