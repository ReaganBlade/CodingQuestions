//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
        if (n == 1){
            return 1;
        } 
        else if (n == 2){
            return -1;
        }
        else {
            long long lsum = arr[0], rsum = arr[n-1];
            int left = 1, right = n-2;

            while(left < right){
                if(lsum < rsum){
                    lsum += arr[left];
                    left++;
                }
                else if (rsum < lsum){
                    rsum += arr[right];
                    right--;
                }
            }

            if (lsum == rsum){
                return left + 1;
            }
            return -1;
        }
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