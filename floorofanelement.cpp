#include <bits/stdc++.h>
using namespace std;

int floor(int arr[], int n, double key)
{    
    int ans=-1;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == key)
            return arr[mid];

        else if (arr[mid] < key){
            ans=arr[mid];
            low = mid + 1;
        }

        else
            high = mid - 1;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    double key;
    cin >> key;
    int ans = floor(arr, n, key);
    cout << ans << endl;
    return 0;
}