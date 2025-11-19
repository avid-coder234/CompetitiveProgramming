#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string str;
    cin >> str;
    
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] == '1'){
            cout << "13\n";
            break;
        }
        else if(str[i] == '3'){
            cout << "31\n";
            break;
        }
    }
}
int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
}
