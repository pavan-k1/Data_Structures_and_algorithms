//A program to implement the binary search algorithm
// #include<iostream>
// using namespace std;

// int binarySearch(int arr[],int size,int key){
//     int high=size-1;
//     int low=0;
//     int mid;

//     while(low<=high){
//         mid=(high+low)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]!=key){
//             if(key>arr[mid]){
//                 low=mid+1;
//             }
//             else{high=mid-1;}
//         }
//     }
//         return -1;
    
// }


// int main(){
//     int arr[20],n,key;
//     cout<<"ENTER THE SIZE OF ARRAY\n";
//     cin>>n;
//     cout<<"ENTER THE ELEMENTS\n ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH\n";
//     cin>>key;
//     if(binarySearch(arr,n,key)==-1){
//         cout<<"THE KEY IS NOT PRESENT IN THE ARRAY\n";
//     }
//    else{ cout<<binarySearch(arr,n,key);}
// return 0;
// }

//QUESTION : we have given an sorted array we have to find the index of the first and last occurance of the key given by user
// #include<iostream>
// using namespace std;
// int lastOccu(int arr[],int size,int key){
//     int max;
// for(int i=0;i<size;i++){
//     if(key==arr[i]){
//       max=i;
//     }
// }
// return max;
// }

// int firstOccu(int arr[],int size,int key){
// for(int i=0;i<size;i++){
//     if(key==arr[i]){
//         return i;
//     }
// }
// return -1;

// }





// int main(){int arr[20],n,key;
//     cout<<"ENTER THE NO OF ELEMENT";
//     cin>>n;
//     cout<<"ENTER THE ELEMENTS";
//     for(int i=0;i<n;i++){
//     cin>>arr[i];}
//     cout<<"THE ELEMENT YOU WANT FIRST AND LAST INDEX OF";
//     cin>>key;
//     cout<<"THE FIRST INDEX OF OCCURANCE IS :";
//     cout<<firstOccu(arr,n,key);
//     cout<<"THE LAST INDEX OF OCCURANCE IS :";
//     cout<<lastOccu(arr,n,key);

// }
//solution of above question using binary search (O(logN) complexity)
// #include<iostream>
// using namespace std;
 
//  int firstOccu(int arr[],int size,int key){
//     int mid,s=0,e=size-1;
//     int ans;
    
//     while(s<=e){
//         mid=s+(e-s)/2;
//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//        }
//        else if(arr[mid]<key){
//         s=mid+1;
//        }
//        else {e=mid-1;}
//     }
//     return ans;
//  }
//  int lastOccu(int arr[],int size,int key){
//     int mid,s=0,e=size-1;
//     int ans;
    
//     while(s<=e){
//         mid=s+(e-s)/2;
//         if(arr[mid]==key){
//             ans=mid;
//             s=mid+1;
//        }
//        else if(arr[mid]<key){
//         s=mid+1;
//        }
//        else {e=mid-1;}
//     }
//     return ans;
//  }
// int main(){int arr[20],n,key;
//     cout<<"ENTER THE NO OF ELEMENT";
//     cin>>n;
//     cout<<"ENTER THE ELEMENTS";
//     for(int i=0;i<n;i++){
//     cin>>arr[i];}
//     cout<<"THE ELEMENT YOU WANT FIRST AND LAST INDEX OF";
//     cin>>key;
//     cout<<"THE FIRST INDEX OF OCCURANCE IS :";
//     cout<<firstOccu(arr,n,key);
//     cout<<"THE LAST INDEX OF OCCURANCE IS :";
//     cout<<lastOccu(arr,n,key);
//     cout<<"THE TOTAL NO OF OCCURANCE IS:";
//     cout<<(lastOccu(arr,n,key)-firstOccu(arr,n,key))+1;

// }

//QUESTION:Finding the peak element of the Mountain array 
// #include<iostream>
// using namespace std;

// int peakElement(int arr[],int size){
//     int s=0,e=size-1,mid;
    
//     while(s<e){
//          mid=s+(e-s)/2;
//         if(arr[mid+1]>arr[mid]){
//         s=mid+1;
//         }
//         else if(arr[mid]<arr[mid-1]){
//             e=mid-1;
//         }
//         else if((arr[mid]>arr[mid+1])&&(arr[mid]>arr[mid-1])){
//             return arr[mid];
//         }
      
//     }
//       return -1;
// }

// int main(){int arr[20],n;
//     cout<<"ENTER THE NO OF ELEMENTS: ";
//     cin>>n;
//     cout<<"ENTER THE ELEMENTS: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"THE PEAK ELEMENT OF THE MOUNTAIN ARRAY IS: ";
//     cout<<peakElement(arr,n);
//     return 0;
// }
//QUESTION: Find the pivot element(the least element in the rotated sorted array) of the given array
// #include<iostream>
// using namespace std;

// int pivotElement(int arr[],int size){
//     int start=0,end=size-1;
//     int mid;
//     while(start<end){
//         mid=(start+end)/2;
//         if(arr[mid]>arr[0]){
//             start=mid+1;
//         }
//         else{end=mid;}//why not mid-1 as we donot want to lose our pivot if mid is pivot then it will be doing mid-1 so our pivot will be lost
//     }

//    return arr[end]; 
// }
// int main(){
//     int arr[20],n;
//     cout<<"ENTER THE N";
//     cin>>n;
//     cout<<"ENTER THE ELEMENTS";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"THE PIVOT ELEMENT IS : ";
// cout<<pivotElement(arr,n);
// return 0;
// }
// searching in a rotated sorted array using binary search
// #include<iostream>
// using namespace std;

// int pivotElement(int arr[],int size){
//     int start=0,end=size-1;
//     int mid;
//     while(start<end){
//         mid=(start+end)/2;
//         if(arr[mid]>arr[0]){
//             start=mid+1;
//         }
//         else{end=mid;}//why not mid-1 as we donot want to lose our pivot if mid is pivot then it will be doing mid-1 so our pivot will be lost
//     }

//    return end; 
// }

// int searchInRotatedArr(int arr[],int size,int key){
// int start=0,end=size-1;
// int mid;

//     if(key>=arr[0]){
//     end=pivotElement(arr,size)-1;
//     }
//     else{start=pivotElement(arr,size);}
// while(start<=end){
// mid=(start+end)/2;
// if(arr[mid]>key){
//     end=mid-1;
// }
// else if(arr[mid]<key){
//     start=mid+1;
// }
// else if(arr[mid]==key){
//     return mid;
// }
// }
// return -1;
// }
// int main(){
//      int arr[20],n,key;
//     cout<<"ENTER THE N";
//     cin>>n;
//     cout<<"ENTER THE ELEMENTS";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"ENTER THE KEY";
//     cin>>key;
//   if(searchInRotatedArr(arr,n,key)==-1){
//     cout<<"THE KEY IS NOT PRESENT ";}
// else{cout<<"THE INDEX OF THE KEY IN THE ARRAY IS: " ; 
// cout<<searchInRotatedArr(arr,n,key);}
// return 0;

// }

//QUESTION: FINDING THE FLOOR OF SQUARE ROOT OF A GIVEN NUMBER
#include <iostream>

using namespace std;
int getSqrt(int n){
    int start=0;
    int end=n-1;
    long long mid;
    while(start<=end){
        mid=start+(end-start)/2;
         if(mid*mid<n&&(mid+1)*(mid+1)>n){
            return mid;
        }
        else if(mid*mid<n){
        start=mid+1;
        }
        else if(mid*mid>n){
            end=mid-1;
        }
       
        else{return mid;}

    }
}

int main() {int n;
  cout<<"ENTER THE N";
  cin>>n;
  cout<<"THE SQUARE ROOT IS : ";
  cout<<getSqrt(n);
  

  return 0;
}




