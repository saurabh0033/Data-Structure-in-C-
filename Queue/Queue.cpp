#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(2);
    q.push(20);
    q.push(200);
    q.push(2000);
    q.push(20000);

    cout<< "First Element is==>"<< q.front()<<endl;

    //size of queue is
    cout<< "Size of queue is ="<< q.size()<< endl;

    //pop method
    q.pop();
    cout<< "first Element is==>"<< q.front()<<endl;


    //size of queue is
    cout<< "Size of queue is ="<< q.size()<< endl;


}
