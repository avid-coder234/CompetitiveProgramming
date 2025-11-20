#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long l,r;
    cin >> l >> r;
    
    long long x = l;
    long long y = 2 * l;
    
    if(y <= r){
        cout << x <<" " << y<<"\n";
    }
    else{
        cout <<"-1 -1"<<"\n";
    }
    
}
int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
}