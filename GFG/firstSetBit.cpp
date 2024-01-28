//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        // int pos = 1;
        // int x = n & 1;

        // while(x != 1){
        //     n = n >> 1;
        //     x = n & 1;
        //     pos++;
        // }

        // return pos;


        int pos = 1;
        while(n){
            if(n & 1){
                return 1;
            }
            n >>= 1;
            pos++;
        }

        return 0;

    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends