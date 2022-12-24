#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>arr(n);

    int start = 0;
    int end = n - 1;
    int mid = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target, temp = 0;
    cin >> target;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (target == arr[mid])
        {
            cout << "Found at " << mid;
            temp = 1;
            break;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (temp == 0)
    {
        cout << "Not Found";
    }

    return 0;
}
