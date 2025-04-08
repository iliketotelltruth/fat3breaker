#include<iostream>
using namespace std;

int t[1024];
int x[1024];
main()
{
	int n, a, i, w, g, c;
	cin >> n;
	w=n;
	for(i=0;i<n;i++)
	{
		cin >> t[i];
		x[i]=i;
	}	
	cout << 0 << " ";
	for(i=1, a=t[0], c=0;i<n;i++)
	{
		if(g>w)
		{
			break;
		}
		else if(a<=0&&i<w)
		{
			a=t[i]+a;
			cout << i << " ";
			g++;
		}
		else if(a<=0)
		{
		a=t[i]+a;
		cout << x[i]-c <<" ";
		g++;
		}
		else if(a>0&&i<w)
		{
			a=a-t[i];
			t[n]=t[i];
			x[n]=i;	
			n++;
		}
	}
	return 0;
}
