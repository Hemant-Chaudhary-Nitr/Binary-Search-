#include <bits/stdc++.h>
using namespace std;

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
            cout<<(n-mid)<<endl;
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
    numberofarrayrotation(arr, n);  
    return 0;
}