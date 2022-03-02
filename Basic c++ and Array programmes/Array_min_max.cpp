#include<iostream>
using namespace std;

int max_min(int arr[], int n){
    int max,min;
    max=arr[0];
    min=arr[0];
    for(int i=0; i<n;i++){
        if(arr[i]>max){
            max= arr[i];
        }
        if(arr[i]<min){
            min= arr[i];
        }
    }
    cout<< "Minimum value is=>"<<min<<endl;
    cout<< "Maximum value is=>"<<max<<endl;

}


int main(){
    int n;
    cout<< "Enter the size of the array=>";
    cin>> n;
    cout<< " Enter the value of array=>";
    int arr[n];
    for(int i=0; i<n; i++){
            cin>>arr[i];
    }
    max_min(arr,n);

}
