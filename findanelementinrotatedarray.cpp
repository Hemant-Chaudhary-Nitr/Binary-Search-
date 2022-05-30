#include <bits/stdc++.h>
using namespace std;

int ans = -1;
void numberofarrayrotation(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int prev = (mid + n - 1) % n;
        int next = (mid + 1) % n;

        if ((arr[mid] <= arr[prev]) && (arr[mid] <= arr[next]))
        {
            ans = mid;
        }
        if (arr[low] <= arr[mid])
        {
            low = mid + 1;
        }

        if (arr[high] >= arr[mid])
        {
            high = mid - 1;
        }
    }
}

int Bs(int arr[], int start, int end, int key)
{
    int low = start;
    int high = end;
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
    numberofarrayrotation(arr, n);
    int x = Bs(arr, 0, ans - 1, key);
    int y = Bs(arr, ans, n - 1, key);

    if (x == -1 && y == -1)
        cout << "element not found." << endl;
    else
        cout << max(x, y) << endl;

    return 0;
}