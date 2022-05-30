#include <bits/stdc++.h>
using namespace std;

int lastOccurance(int arr[], int n, int key)
{
    int res = -1;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == key)
        {
            res = mid;
            low = mid + 1;
        }

        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return res;
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
    int ans = lastOccurance(arr, n, key);
    cout << ans << endl;
    return 0;
}