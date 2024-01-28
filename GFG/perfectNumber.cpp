#include <bits/stdc++.h>
using namespace std;

bool checkPerfect(int n){
    int sum = 0;
    for( int i = 1; i < n; i++ ){
        if( n % i == 0 ){
            // cout << i << endl;
            sum += i;
        }
    }

    // cout << sum << endl;

    if(sum == n)
        return 1;
    return 0;
}

int main(){

    int x;
    cin >> x;

    cout << checkPerfect(x);
    return 0;
}