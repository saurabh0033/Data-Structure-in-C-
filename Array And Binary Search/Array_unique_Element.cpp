#include <iostream>
using namespace std;

int unique(int arr[], int n){
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[j]==arr[i]){
                count+=1;
            }
        }
        if(count==1){
             cout<< "Unique Element is=>" << arr[i]<<endl;
            }
    }
}

int main(){
    int n;
    cout<< "Enter the size of array=>";
    cin>> n;
    int arr[50];
    cout<< "Enter the array=>";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    unique(arr,n);
    return 0;
}
