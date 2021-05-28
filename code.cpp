// https://practice.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1/?category[]=Arrays&category[]=Arrays&problemStatus=solved&page=1&query=category[]ArraysproblemStatussolvedpage1category[]Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    void segregate0and1(int arr[], int n) 
    {
        int count=0, i;
        for(i=0; i<n; i++)
        {
            if(arr[i]==0)
            count++;
        }
        
        for(i=0; i<count; i++)
        arr[i]=0;
        
        for(i=count; i<n; i++)
        arr[i]=1;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
} 
