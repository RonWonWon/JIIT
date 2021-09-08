//Created By : Rachit Pratap Singh
#include<bits/stdc++.h>
using namespace std;

#define pb push_back                                                            
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()     
#define int long long       

int32_t main(){
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) if(a[i]%2==0) cout<<a[i]<<" ";
	for(int i=0;i<n;i++) if(a[i]%2==1) cout<<a[i]<<" ";
	cout<<endl;
  return 0;
}
