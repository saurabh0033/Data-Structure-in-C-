#include <iostream>

using namespace std;

void intersection(int arr1[], int arr2[], int n, int m){

    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i]== arr2[j]){
            cout<< arr1[i] << " ";
            break;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
     int n,m;
    cout<< "Enter the size of Array-1=>";
    cin>>n;
    int arr1[50];
    cout<< "Enter the Array-1=>";
    for(int i=0; i<n;i++){
        cin>>arr1[i];
    }
    cout<< "Enter the size of Array-2=>";
    cin>>m;
    int arr2[50];
    cout<< "Enter the Array-2=>";
     for(int i=0; i<m;i++){
        cin>>arr2[i];
    }
    intersection(arr1,arr2,n,m);
    return 0;
}
