//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        // Your code here
        int l = 1, r = n - 2;
        int lsum = a[l], rsum = a[r];

        while(l < r - 2){
            if (lsum >= rsum){
                rsum += a[r];
                r -= 1;
            }
            else if (lsum < rsum){
                lsum += a[l];
                l += 1;
            }
            else {
                l += 1;
            }
        }

        if (lsum == rsum){
            return l +1;
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends