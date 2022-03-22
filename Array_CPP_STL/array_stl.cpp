#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int,5> a={55,41,68,23,12};
    int size=a.size();
    cout<< "size of an array=>"<< size<<endl; //size of array.


    // printing the all elements present in the array.
     cout<< "array is=>";
    for(int i=0; i<size; i++){
        cout<< a[i]<<endl;
    }



    // element of an array at any index
    cout<< a.at(3)<<endl;

    //is array empty.
    cout<< a.empty()<< endl;

    //print the 1st and last element of array
    cout<<a.front()<<endl;
    cout<<a.back()<< endl;


}

