#include <iostream>
using namespace std;

int foccur(int arr[],int size, int key){
    int start=0;
    int last=size-1;
    int mid=start+(last-start)/2;
    int ans;
    while(start<=last){
        if(arr[mid]==key){
            ans=mid;
            last=mid-1;
        }
        if(key> arr[mid]){
            start=mid+1;
        }
        if(key< arr[mid]){
            last=mid-1;
        }
        mid=start+(last-start)/2;
    }
    return ans;
}


int loccur(int arr[],int size, int key){
    int start=0;
    int last=size-1;
    int mid=start+(last-start)/2;
    int ans;
    while(start<=last){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        if(key> arr[mid]){
            start=mid+1;
        }
        if(key< arr[mid]){
            last=mid-1;
        }
        mid=start+(last-start)/2;
    }
    return ans;
}

int main(){
    int arr[7]={11, 12, 12, 12, 13, 13, 15};
    cout<< foccur(arr, 7, 13)<< " "<< loccur(arr,7,13);
    return 0;
}
