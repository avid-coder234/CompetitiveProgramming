#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0) return 1;

    int p = 1;
    for(int i = 1 ; i <= n ; i++){
        p = p * i;
    }

    return p;
}

int ncr(int n , int r){
    if(r== 0 || r == n) return 1;

    if(r > n) return 0;

    return fact(n) / (fact(n-r) * fact(r));
}
int main(){

}