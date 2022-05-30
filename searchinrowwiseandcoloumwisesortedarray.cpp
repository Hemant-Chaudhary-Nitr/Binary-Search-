#include <bits/stdc++.h>
using namespace std;

void BinSearch(int arr[4][4], int key)
{
    int i = 0;
    int j = 3;
    // vector<int> v = {-1};

    while ((i >= 0 && i < 4) && (j >= 0 && j < 4))
    {
        if (arr[i][j] == key)
        {
            cout << i << " " << j << endl;
        }

        else if (arr[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    if((i < 0 && i >= 4) && (j < 0 && j >= 4)){
        cout<<"element does not exist."<<endl;
    }
}

int main()
{
    // int n,m;
    // cin>>n>>m;

    int arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            cin >> arr[i][j];
        }
    }
    int key;
    cin >> key;
    BinSearch(arr, key);
    // cout << ans[0] << " " << ans[1] << endl;
    return 0;
}