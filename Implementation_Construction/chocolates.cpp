#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
 
    long long sum = arr[n-1];
    long long maxi = arr[n-1] - 1;
 
    for(int i = n - 2 ; i >= 0 ; i--){
        if(arr[i] < maxi){
            sum += arr[i];
            maxi = arr[i] - 1;
        } else {
            sum += maxi;
            maxi = maxi - 1;
        }
 
        if(maxi < 0) break;
    }
 
    cout << sum << "\n";
    return 0;
}
