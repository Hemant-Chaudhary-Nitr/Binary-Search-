#include <bits/stdc++.h>
using namespace std;

int RBinSearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            high = mid - 1;
        else
            low = mid + 1;
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
    int ans = RBinSearch(arr, n, key);
    cout << ans << endl;
    return 0;
}