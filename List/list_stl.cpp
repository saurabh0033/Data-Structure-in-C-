#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_front(1);

    cout<< "Entered list is=>";
    for(int i:l){
        cout<<i<< " ";
    }
    cout<<endl;
    cout<< "size of list is=>"<< l.size()<<endl;\


      // front and last element of list
    cout<< "1st element is=>"<< l.front()<<endl;
    cout<< "last element is=>"<< l.back()<<endl;


     // list is empty or not -
    cout<< "Empty or Not= "<< l.empty()<<endl;


    //erase()
    cout<< "Before erase size is=> "<< l.size()<<endl;
    l.erase(l.begin());
    cout<< "After erase size is=> "<< l.size()<<endl;
}
