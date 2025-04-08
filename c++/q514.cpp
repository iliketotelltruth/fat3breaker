#include<iostream>
#include<stack>
using namespace std;

int s[1024];
main(){
	{
	int n;
	while(cin>>n){
			if(n==0){
				break;
			}
			while(cin>>s[0]){
				if(s[0]==0){
					break;
				}
				int a=0;
				stack<int>stk;
				for(int i=1;i<n;i++){
					cin >> s[i];
				}
				for(int i=1;i<=n;i++){
					stk.push(i);					
					while(!stk.empty()&&stk.top()==s[a]){
						stk.pop();
						a++;
					}					
				}
				if(stk.empty()){
					cout << "Yes\n";
				}
				else{
					cout << "No\n";
				}
			}
			cout << "\n";
		}	
	}
	return 0;
}
