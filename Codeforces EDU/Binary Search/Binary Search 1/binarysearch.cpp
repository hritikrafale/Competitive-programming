#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,k;
		
	scanf("%d %d",&n,&k);
		
	vector<int> a(n);
		
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	while(k--){
		int key;
		
		bool flag=false;
		
		scanf("%d",&key);
		
		int l=0,r=n-1;
	
		while(r>=l){
			int m=(r+l)/2;
		
			if(a[m]==key){
				flag=true;
				break;
			}
			else if(a[m]<key){
				l=m+1;
			}
			else {
				r=m-1;
			}
		}
		
		if(flag){
			cout<<"YES\n";
		} else{
			cout<<"NO\n";
		}
	}	
	
	return 0;
}
