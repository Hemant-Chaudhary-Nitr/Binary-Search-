#include <bits/stdc++.h>
using namespace std;

int BinSearch(int arr[], int n, int key)
{
    // int ans = -1;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == key)
            return 0;

        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    int x = abs(arr[low] - key);
    int y = abs(arr[high] - key);
    int ans = 0;
    if (x > y)
        ans = y;
    else
        ans = x;

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
    int res = BinSearch(arr, n, key);
    cout << res << endl;

    return 0;
}