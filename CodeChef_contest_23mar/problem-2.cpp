//Economics Class
/*
Sample Input
2
4
1 2 3 4
2 1 3 4
4
1 1 2 2
1 2 1 1
Sample Output
2
1
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n;
	    cin>> n;
	    int arr1[n];
	    int arr2[n];

	    for(int j=0; j<n; j++){
	        cin>> arr1[j];
	    }
	     for(int k=0; k<n; k++){
	        cin>> arr2[k];
	    }
	    int count=0;
	    for(int l=0; l<n; l++){
	        if(arr1[l]==arr2[l]){
	            count++;
	        }
	    }
	    cout<< count<<endl;
	}
	return 0;
}
