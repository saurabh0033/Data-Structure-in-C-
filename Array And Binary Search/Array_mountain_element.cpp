#include <iostream>
using namespace std;

int peakElem(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
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
    int arr[4]={10,14,21, 11};
    cout<< "peak element index is=>"<< peakElem(arr,4);
}
