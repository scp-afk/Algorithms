#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a(n+1,0),b;
    for(int i = 2;i <= n;i++){
        if(a[i] == 0){
            a[i] = i;
            b.push_back(i);
        }
        for(int j = 0;j < b.size();j++){
            if (i * b[j] <= n && b[j] <= a[i]){
                a[b[j] * i] = b[j];   
            }
        }
    }
    for(auto &i : b) cout << i << " ";
}
