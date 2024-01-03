#include <bits/stdc++.h>
using namespace std;

string replaceAll(string str) {
  //:)
  int i = 0;
  string ans = "";
  while(i < str.length()){
    if(str[i] == '#'){
        break;
    }
    ans += str[i];
    i++;
  }
  return ans;  
}

int main(){
    string state;
    getline(cin, state);

    string result = replaceAll(state);
    cout << result;

    return 0;
}