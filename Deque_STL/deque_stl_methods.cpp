#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    d.push_back(7);
    d.push_front(1);

    cout<< "Entered deque is=>";
    for(int i:d){
        cout<<i<< " ";
    }
    cout<<endl;
    cout<< "size of deque is=>"<< d.size()<<endl;



    // print any element in deque.
    cout<< "Random Element in deque by at menthod=>"<< d.at(6)<<endl;


    // front and last element of deque
    cout<< "1st element is=>"<< d.front()<<endl;
    cout<< "last element is=>"<< d.back()<<endl;


    // deque is empty or not -
    cout<< "Empty or Not= "<< d.empty()<<endl;

    //erase()
    cout<< "Before erase size is=> "<< d.size()<<endl;
    d.erase(d.begin(), d.begin()+5);
    cout<< "After erase size is=> "<< d.size()<<endl;
    cout<< "deque is=>";
     for(int i:d){
        cout<<i<< " ";
    }

}
