// Given two arrays a and b both of size n. 
//Given q queries in an arrray query each having a positive integer x denoting an index of the array a. 
//For each query, your task is to find all the elements less than or equal to a[x] in the array b.

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int bs(int ele , vector<int>b)
    {
        int l=0 , h=b.size()-1;
        int count=-1;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(b[mid] <= ele)
            {
                count = mid;
                l = mid+1;
            }
            else
              h = mid-1;
             
        }
        return count+1;
    }
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,int q) 
    {
        // Your code goes here;
        sort(b.begin() , b.end());
        int maxi = *max_element(b.begin() , b.end());
        vector<int>ans;
        for(int i=0;i<q;i++)
        {
            int idx = query[i];
            int ele = a[idx];
            if(ele >= maxi)
            ans.push_back(n);
            else
            {
            int c = bs(ele,b);
            ans.push_back(c);
            }
            
            
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<int> a, b, ans;
        int input;
        for (int i = 0; i < n; i++) {
            cin >> input;
            a.push_back(input);
        }
        for (int i = 0; i < n; i++) {
            cin >> input;
            b.push_back(input);
        }
        int q;
        cin >> q;
        vector<int> query;
        for (int i = 0; i < q; i++) {
            cin >> input;
            query.push_back(input);
        }
        Solution obj;
        ans = obj.countElements(a, b, n, query, q);
        for (int i = 0; i < q; i++) {
            cout << ans[i] << endl;
        }
    }
    return 0;
}
// } Driver Code Ends
