#include <iostream>
using namespace  std;

int check(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans= ans ^ arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<< "Enter the size of array=>";
    cin>>n;
    int arr[n];
    cout<< "Enter the Array=>";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    if(n%2!=0){
       cout<< "Unique value is=>" <<check(arr,n);
    }
    else{
        cout<< "No any Unique Value is Present...!";
    }
}
