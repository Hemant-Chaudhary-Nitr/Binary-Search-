#include <bits/stdc++.h>
using namespace std;

char nextalphabet(char arr[], int n, char key)
{
    int ans = -1;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] <= key)
            low = mid + 1;

        else
        {
            ans = arr[mid];
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    char key;
    cin >> key;
    char ans = nextalphabet(arr, n, key);
    cout << ans << endl;
    return 0;
}