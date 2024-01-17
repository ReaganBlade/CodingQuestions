//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        unordered_map<int, int> frequency;
        vector<int> duplicates;

        for(int i = 0; i < n; i++){
            frequency[arr[i]]++;
            if ( frequency[arr[i]] == 2){
                duplicates.push_back(arr[i]);
            }
        } 

        sort(duplicates.begin(), duplicates.end());
        
        return duplicates.empty() ? vector<int>{-1} : duplicates;
    }

};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends