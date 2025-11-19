#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    
    vector<int> div = {10 , 100 , 1000 , 10000 , 100000};
    vector<int> ans;
    for(auto it : div){
        
        if(n % it != 0){
            ans.push_back(n % it);
            n = n - (n % it);
        }
    }
    
    cout << ans.size() << endl;
    for(auto it : ans){
        cout << it << " ";
    }
    cout <<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}