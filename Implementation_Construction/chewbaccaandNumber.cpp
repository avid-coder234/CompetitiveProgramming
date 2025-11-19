#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string x;
    cin >> x;
    string ans;
    for(int i = 0 ; i < x.size() ; i++){
        char ch = x[i];
        int num = ch - '0';
        int invert = 9 - num;
        ans += min(num , invert) + '0';
    }
    
    if(ans[0] == '0'){
        ans[0] = '9';
    }
    
    cout << ans << endl;
}