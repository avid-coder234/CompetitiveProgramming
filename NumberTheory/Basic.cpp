#include<bits/stdc++.h>
using namespace std;

void factors(int n){

    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            cout << i <<" ";
        }
    }
}

void factors2(int n){

    for(int i = 1 ; i * i <= n ; i++){
        if(n % i == 0){
            cout << i <<" ";

            if(i != n / i){
                cout << n / i <<" ";
            }
        }
    }
}
bool prime(int n){

    if(n == 0 || n == 1) return false;

    for(int i = 2 ; i <= n - 1 ; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

bool prime2(int n){
    if(n == 0 || n == 1) return false;

    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

void printPrime(int n){

    for(int i = 2 ; i <= n ; i++){
        if(prime2(i)){
            cout << i << " ";
        }
    }
}


vector<bool> seive(int n){
    vector<bool> arr(n+1 , true);

    arr[0] = false;
    arr[1] = false;

    for(int i = 2 ; i * i <= n ; i++){
        if(arr[i] == true){
            for(int j = i * i ; j <= n ; j += i){
                arr[j] = false;
            }
        }
    }

    return arr;
}
int main(){
    

    
    vector<bool> ans = seive(50);

    for(int i = 0 ; i <= 50 ; i++){
        if(ans[i]){
            cout << i <<" ";
        }
    }
}