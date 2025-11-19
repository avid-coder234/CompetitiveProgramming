#include<bits/stdc++.h>
using namespace std;

int powerWithMod(int a , int b , int m){

    if(b == 0){
        return 1;
    }

    if(b == 1){
        return a;
    }

    int x = powerWithMod(a , b / 2 , m) % m;
    int ans = 0;
    if(b % 2 == 1){
        ans = (x % m * x % m) % m;
        ans = (ans % m * x % m) % m;
    }
    else{
        ans = (x % m * x % m) % m;
        ans = ans % m;
    }


    return ans;
    
}
int powerof(int a , int b){
    if(b == 0){
        return 1;
    }

    int x = pow(a , b / 2);
    int ans = 0;

    if(b % 2 == 1){
        ans = x * x * a;
    }
    else{
        ans = x * x;
    }

    return ans;
}
int main(){

}