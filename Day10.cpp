//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int firstElement(int n) {
        // code here
         // code here
        int a=1,b=1,c=1,d=0;
        int m = 1e9+7;
        if(n==1) return c;
        
        for(int i=1;i<n;i++){
            int temp1=a,temp2=b,temp3=c;
            a=(temp1+temp2)%m;
            b=temp1%m;
            c=temp1%m;
        }
        
        return c%m;
    }
        
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
