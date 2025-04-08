#include<iostream>
using namespace std;

int num[1024];
int temp[1024];
void merge(int p, int q){
	int mid, i, j, k;
	mid=(p+q)/2;
	for(i=p, j=mid+1, k=p;k<=q;k++){
		if(i>mid){
			temp[k]=num[j];
			j++;
		}
		else if(j>q){
			temp[k]=num[i];
			i++;
		}
		else if(num[i]<num[j]){
			temp[k]=num[i];
			i++;
		}
		else{
				temp[k]=num[j];
			j++;
		}
	}
		for(k=p;k<=q;k++){
		 num[k]=temp[k]; 
	}
} 
void msort(int p, int q){
	int mid;
	if(p==q){
		return;
	}
	mid=(p+q)/2;
	msort(p, mid);
	msort(mid+1, q);
	merge(p, q);
}

