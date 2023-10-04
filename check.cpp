#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 11;

    for (int i = 0; i < size; i++)
    {
        size = size - 1;
        if (i == size)
        {
            cout << arr[i];
        }
        else
        {

            cout << arr[i];
            cout << arr[size];
        }
    }
}