#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int start, int end)
{
    int pivot = arr[end];
    int pindx = start;
    for(int i=start; i<end; i++)
    {
        if(arr[i] <= pivot)
        {
            swap(arr[i], arr[pindx]);
            pindx++;
        }
    }
    swap(arr[pindx], arr[end]);
    return pindx;
}

void quickSort(vector<int>& arr, int start, int end)
{
    if (start < end)
    {
        int pindx = partition(arr, start, end);
 
        quickSort(arr, start, pindx - 1);
        quickSort(arr, pindx + 1, end);
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
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}