#include <bits/stdc++.h>
using namespace std;

int BinSearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == key)
            return mid;

        else if(((mid-1)>=low) && (arr[mid-1]==key)) 
            return mid-1;

        else if(((mid+1)<=high) && (arr[mid+1]==key))
            return mid+1;      

        else if (arr[mid] < key)
            low = mid + 2;
        else
            high = mid - 2;
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
    int ans = BinSearch(arr, n, key);
    cout << ans << endl;
    return 0;
}