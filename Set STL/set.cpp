#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;
    s.insert(200);
    s.insert(200);
    s.insert(200);
    s.insert(300);
    s.insert(300);
    s.insert(400);
    s.insert(200);
    s.insert(300);
    s.insert(400);
    s.insert(500);

    //print set
     cout<< "Set Element is=>";
    for(int i:s){
        cout<< i<<" ";
    }
    cout<< endl;
    
    

    //size of Set
    cout<< "Size of The Set is ===>"<< s.size()<<endl;

    //Is Empty
    cout<< "Is Empty->"<< s.empty()<<endl;

    //erase
    set<int>::iterator it=s.begin();
    it++;
    it++;
    it++;
    s.erase(it);
    for(int j:s){
        cout<<j<<" ";
    }
    cout<<endl;
}
