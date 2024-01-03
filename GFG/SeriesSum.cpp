#include <iostream>
using namespace std;

long long sumOfSeries(int n){
    return (n*(n+1))/2;
}

int main(){
    int n = 46341;
    auto result = sumOfSeries(n);
    cout << result;

    return 0;
}