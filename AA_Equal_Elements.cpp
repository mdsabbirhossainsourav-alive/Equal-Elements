#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int a[n];
        int freq[n+1] = {0}; 
        int max_freq = 0;
        for (int i=0; i<n; i++) 
        {
            cin >> a[i];
            freq[a[i]]++;
            if (freq[a[i]] > max_freq)
            {
                max_freq = freq[a[i]];
            }     
        }
        cout << n-max_freq << endl;
    }
    return 0;
}