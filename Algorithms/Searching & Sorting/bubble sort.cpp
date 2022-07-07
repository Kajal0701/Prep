Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.
This algorithm is not suitable for large data sets as its average and worst case time complexity is quite high.
T.C = O(n*n)
S.C = O(1)

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr)
{
    int n = arr.size();
    for(int i=1; i<=n-1; i++)
    {
        bool flag = 0;
        for(int j=0; j<=n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                flag = 1;
                swap(arr[j], arr[j+1]);
            }
        }
        if(!flag)   return;
    }
}

int main()
{
    int n;  cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++)
    {
        int x;  cin>>x;
        arr.push_back(x);
    }
    bubbleSort(arr);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}