#include <iostream>
#include <vector>
using namespace std;
void insertionSort(int n, vector<int> &arr){
    int i=1;
    while(i<n){
        int temp=arr[i];
        int j=(i-1);
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        i++;
    }
}
