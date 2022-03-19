#include <iostream>
using namespace std;

int pivot(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main(){
    int arr[5]={4,7,8,9,3};
    cout<< "Index of pivot Element is=>"<< pivot(arr, 5);
    return 0;
}
