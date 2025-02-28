#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,l,r;
	cin >> n >> l >> r;
	l--;r--;
	vector<int>a(n),prefx(n);
	for(auto &i : a){
	    cin >> i;
	}
	prefx[0] = a[0];
	for(int i = 1;i < n;i++){
	    prefx[i] = prefx[i - 1] ^ a[i];
	}
	int ans = prefx[r] ^ prefx[l - 1];
	cout << ans;
}
