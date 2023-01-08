#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}

int gettheminelement(vector<int> A, int i)
{
    int min = i;
    for (; i < A.size(); i++)
    {
        if (A[i] < A[min])
        {
            min = i;
        }
    }
    return min;
}

void sort(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        int j = gettheminelement(A, i);
        swap(A[i], A[j]);
        printVector(A);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    cout << "sorted array";
    sort(A);
}