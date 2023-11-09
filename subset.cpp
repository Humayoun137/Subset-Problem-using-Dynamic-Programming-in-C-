#include <bits/stdc++.h>
using namespace std;
int subsetSum(int arr[], int n, int sum)
{
    bool dp[n+1][sum+1];
    for(int i=0; i<=n; i++)
        dp[i][0] = 1;

    for(int j=1; j<=sum; j++)
        dp[0][j] = 0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=sum; j++)
        {
            if(j < arr[i-1])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];

        }
    }

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=sum; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return dp[n][sum];
}
int main()
{
    int arr[] = {1,3,4,7,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 8;
    if(subsetSum(arr, n, sum))
        cout << "Subset with sum " << sum << " found!" << endl;
    else
        cout << "Subset with sum " << sum << " not found!" << endl;
    return 0;
}
