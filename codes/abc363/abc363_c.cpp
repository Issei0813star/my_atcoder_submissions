#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	string s;
	cin>>n>>k;
	cin>>s;

	vector<int>a;
	for(int i=0;i<n;i++)a.push_back(((int)(s[i]-'a')));
	sort(a.begin(),a.end());
	int ans=0;
	bool ok,flag;

	while(true){
		ok=true;
		for(int i=0;i<=n-k;i++){
			flag=true;
			for(int j=0;j<k;j++){
				if(a[i+j]!=a[i+k-1-j])flag=false;
			}
			if(flag)ok=false;
		}
		if(ok)ans++;
		if(!next_permutation(a.begin(), a.end()))break;
	}
	
	cout<<ans<<endl;
	return 0;
}
