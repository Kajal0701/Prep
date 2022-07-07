Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands.
The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the
correct position in the sorted part.

#include<bits/stdc++.h>
using namespace std;


void insertionSort(vector<int>& arr)
{
    int n = arr.size();
    for(int i=1; i<=n-1; i++)
    {
        int val = arr[i];   
        int hole = i;
        while(hole > 0 && arr[hole-1] > val)
        {
            arr[hole] = arr[hole-1];
            hole--;
        } 
        arr[hole] = val;
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
    insertionSort(arr);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}