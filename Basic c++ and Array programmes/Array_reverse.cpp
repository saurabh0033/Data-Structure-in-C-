#include <iostream>
using namespace std;

int reverse(int arr[], int n){
    cout<< " reverse array is =>[";
    for(int i=n-1; i>=0; i--){
        cout<< arr[i]<<" ";
    }
     cout<< "]";
}

int main(){
    int n;
    cout<< "Enter the size of array=>";
    cin>> n;
    int arr[n];
    cout<< "Enter the value of array=>";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    reverse(arr,n);

    return 0;
}
