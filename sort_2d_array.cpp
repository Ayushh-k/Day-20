#include <bits/stdc++.h>
using namespace std;

void sort2d(vector<vector<int>> &arr, int r, int c)
{

    vector<int> temp;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            temp.push_back(arr[i][j]);
        }
    }

    sort(temp.begin(), temp.end());

    int index = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = temp[index++];
        }
    }
}

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> arr(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    sort2d(arr, r, c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
