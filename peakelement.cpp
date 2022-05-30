#include <bits/stdc++.h>
using namespace std;

int PeakSearch(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);

        if (mid > 0 && mid < (n - 1))
        {
            if ((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
                return mid;

            else if (arr[mid] < arr[mid] - 1)
                high = mid - 1;

            else
                low = mid + 1;
        }

        else if (mid == 0)
        {
            if (arr[0] > arr[1])
                return 0;
            else
                return 1;
        }

        else if (mid == n - 1)
        {
            if (arr[n - 1] > arr[n - 2])
                return n - 1;
            else
                return n - 2;
        }
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
    // int key;
    // cin >> key;
    int ans = PeakSearch(arr, n);
    cout << arr[ans] << endl;
    return 0;
}