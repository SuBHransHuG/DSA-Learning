#include<iostream>
using namespace std;

    void heapify(int arr[], int n ,int i)
    {
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        if (l<n && arr[l]>arr[largest])
        {
            largest = l;
        }
        if(r<n && arr[r]>arr[largest])
        {
            largest = r;
        }
        if(largest != i){
            swap(arr[i],arr[largest]); 
           heapify(arr,n,largest);
        }
    }
    
    void deleteHeap(int arr[],int n){
        int lastEle = arr[n-1];
        arr[0] = lastEle;
        n = n-1;
        heapify(arr,n,0);
    }

    void display(int arr[] ,int n ){
        for (int i = 0; i < n; ++i)
        {
            cout<<arr[i]<<" ";
            cout<<"\n";
        }   
        
    }

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
     deleteHeap(arr,n);
     display(arr,n);

return 0;
}
