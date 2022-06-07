#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max heap
    priority_queue<int>maxi;

    // min heap
    priority_queue<int, vector<int>,greater<int> > mini;


    maxi.push(1);
    maxi.push(10);
    maxi.push(15);
    maxi.push(21);
    maxi.push(5);
    maxi.push(3);

    //size
    cout<< "Size Of Maxi Queue is==>"<< maxi.size()<<endl;

    int n=maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<< " ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(1);
    mini.push(10);
    mini.push(15);
    mini.push(21);
    mini.push(5);
    mini.push(3);

    //size
    cout<< "Size Of Mini Queue is==>"<< mini.size()<<endl;

    int m=mini.size();
    for(int i=0; i<n; i++){
        cout<<mini.top()<< " ";
        mini.pop();
    }
    cout<<endl;
    //IsEmpty
    cout<< "Is Queue was empty==>"<< maxi.empty()<<endl;
}
