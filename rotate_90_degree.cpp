#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
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
    rotate(arr, r, c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}