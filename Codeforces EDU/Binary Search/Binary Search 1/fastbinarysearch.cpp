#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,i,key;
	
	scanf("%d %d",&n,&k);
	
	vector<int> a(n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	//invariant are a[l]<key and a[r]>=key
	
	while(k--){
		scanf("%d",&key);  
		int l=-1,r=n;
		while(r>l+1){
			int m=(l+r)/2;
			
			if(a[m]<key){
				l=m;
			} else{
				r=m;
			}
		}
		
		if(r!=n && a[r]==key){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
}
