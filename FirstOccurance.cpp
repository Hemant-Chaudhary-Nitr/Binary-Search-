#include <bits/stdc++.h>
using namespace std;

int firstOccurance(int arr[], int n, int key)
{
    int ans=-1;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == key){
            ans=mid;
            high=mid-1;
        }
            

        else if (arr[mid] < key)
            low = mid + 1;
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
    int key;
    cin >> key;
    int ans = firstOccurance(arr, n, key);
    cout << ans << endl;
    return 0;
}