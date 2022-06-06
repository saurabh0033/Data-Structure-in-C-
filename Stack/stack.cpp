

//stack is a LIFO or FILO statement follow means Last in First out or first in last out.
// example- mess plates , we can take 1st to last element sequence.

#include <iostream>
#include<stack>

using namespace std;

int main(){
stack<int>s;
s.push(2);
s.push(4);
s.push(6);
s.push(8);
s.push(10);

cout<< "Top Element is --->"<<s.top()<<endl;

//pop the element
s.pop();
cout<< "Top Element is===>"<<s.top()<< endl;


// size of the Stack is
int size=s.size();
cout<< "Size of the Stack is="<<size<< endl;

// Empty or Not
cout<< "Is stack had Empty=>"<< s.empty()<<endl;
}

