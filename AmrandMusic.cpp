#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k;
    cin >> n >> k;
 
    vector<pair<int,int>> arr;  
    
 
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back({x, i + 1}); 
    }
 
    sort(arr.begin(), arr.end()); 
 
    int sum = 0;
    vector<int> ans;
 
    for(auto &p : arr){
        if(sum + p.first <= k){
            sum += p.first;
            ans.push_back(p.second); 
        } else break;
    }
 
    cout << ans.size() << "\n";
    for(int idx : ans) cout << idx << " ";
}