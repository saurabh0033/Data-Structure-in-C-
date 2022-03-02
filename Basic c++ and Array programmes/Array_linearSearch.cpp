#include <iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return true;
            break;
        }
        else{
            return false;
        }
    }
    //return false;
}

 int main(){
 int n;
 cout<< "Enter the size of an Array=>";
 cin>> n;
 int arr[n];
 cout<< "Enter the value of Array=>";
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
 int key;
 cout<< "Enter the key=>";
 cin>>key;
 if(search(arr,n,key)== true){
    cout<< "Key is present in Array...!";
 }
 else{
    cout<< "Key is not present in Array...!";
 }
 }
