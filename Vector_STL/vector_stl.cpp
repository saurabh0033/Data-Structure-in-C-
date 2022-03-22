#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    cout<< "Capacity of v is=>"<< v.capacity()<<endl; // to check the capacity of vector.

    v.push_back(2);
    cout<< "Capacity of v is=>"<< v.capacity()<< endl;      // to push the element in the vector.

    v.push_back(3);
    cout<< "Capacity of v is=>"<< v.capacity()<< endl;

    v.push_back(4);
    cout<< "Capacity of v is=>"<< v.capacity()<< endl;

    v.push_back(5);
    cout<< "Capacity of v is=>"<< v.capacity()<< endl;


    //to get the size of vector.
    int size = v.size();
    cout<< "Size of v is=>"<<size<< endl;


    // to get the any element of vector-
    cout<< "Element in the vector is=>"<< v.at(3)<< endl;


    //to get the first and last element of vector-
    cout<< "1st element of vector="<< v.front()<< endl;
    cout << "last element of vector="<< v.back()<< endl;


    // pop the element in vector-

    cout<< "Before pop=>";
    for (int i:v){
        cout<<i<<" ";
    }
    cout<< endl;


    cout<< "After pop=>";
    v.pop_back();
    for (int i:v){
        cout<<i<<" ";
    }
    cout<< endl;


    //clear the vector.
    cout<< "Before clear size=>"<<v.size()<<endl;
    cout<< "Before clear capacity=>"<<v.capacity()<<endl;


    v.clear();
    cout<< "After clear size=>"<<v.size()<<endl;
    cout<< "After clear capacity=>"<<v.capacity()<<endl;
    return 0;
}
