The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted
part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr)
{
    int n = arr.size();
    for(int i=0; i<n-1; i++)
    {
        int min_idx = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
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
    selectionSort(arr);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}