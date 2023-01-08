#include <bits/stdc++.h>
using namespace std;

int printvector(vector<int> arr)
{

    cout << "Ek chaturnar";

    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}

int gettheminelement(vector<int> arr, int i)
{
    cout << i << endl;
    int min = i; // default value

    for (; i < arr.size(); i++)
    {
        cout << "i:" << i << endl;
        if (arr[i] < arr[min])
        {
            min = i;
        }
    }
    return min;
    cout << min;
}

void sort(vector<int> arr)
{
    cout << "I am here";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "I am here also";         // here i will stay 0 and then whole loop run for j
        int j = gettheminelement(arr, i); // here we are calling get the min element in this it gona compare whole array with min and adjust them in ascending order
        swap(arr[i], arr[j]);             // its swap inbuilt function

        printvector(arr); // after sorting we need to print sorted array
    }
}

int main()
{
    int n, i = 0; // here we need to initalize i for r
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    printvector(arr);
    sort(arr);
    cout << "sorted array:";
    printvector(arr);

    // gettheminelement(arr, i);
}
