#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int s=0,e=size-1;
    int m=(s+e)/2;
    while(s<=e){
        if(arr[m]==key){
            return m;
        }
        if(key > arr[m]){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=(s+e)/2;
    }
    return -1;
}

int main(){
    int even[6]={12,23,34,45,56,76};
    int odd[7]={1,12,32,34,67,78,89};

    int evenIndex=BinarySearch(even,6,76);
    cout<< "Index of 76 is=>"<<evenIndex<<endl;

     int oddIndex=BinarySearch(odd,7,1);
     cout<< "Index of 76 is=>"<<oddIndex<<endl;
}
