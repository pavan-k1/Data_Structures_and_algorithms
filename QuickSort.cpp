//Quick Sort Using Recursion
#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int count=0;
    int pivot=arr[s];
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);
    int i=s;
    int j=e;

    while(i<pivotIndex&&j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex&&j>pivotIndex){
        swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;

}
void quickSort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }

    int p=partition(arr,s,e);


    quickSort(arr,s,p-1);//left side of the partition

    quickSort(arr,p+1,e);
}


int main(){
    cout<<"Enter the no of elements in the array:";
    int n;
    cin>>n;
    cout<<"Enter the array elements";
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}