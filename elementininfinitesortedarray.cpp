#include <bits/stdc++.h>
using namespace std;

int firstOccurance(int arr[], int l, int h, int key)
{
    int ans = -1;
    int low = l;
    int high = h;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }

        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return ans;
}

int BinSearch(int arr[], int l, int h, int key)
{
    int low = l;
    int high = h;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
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
    int low = 0;
    int high = 1;

    while (key > high)
    {
        low = high;
        high = high * 2;
    }

    int ans = BinSearch(arr, low, high, key);
    int res = firstOccurance(arr, low, high, key);
    cout << ans << endl;
    cout << res << endl;
    return 0;
}