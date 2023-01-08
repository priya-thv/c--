#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int getthearrsort(vector<int> arr, int i)
{
    for(int i=0;i<arr.size();i++){
    int temp =arr[i] ;
    int j=i-1;

    while(arr[j]>temp&&j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
    }
    printvector(arr);
}

int main()
{
    int n,i=0;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printvector(arr);
    cout<<"sorted array"<<endl;
    getthearrsort(arr,i);

}