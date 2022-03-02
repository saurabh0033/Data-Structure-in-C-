#include<iostream>
using namespace std;
int main(){
int n;
int Rs_100,Rs_50,Rs_20,Rs_1;
cout<<"______________________________________________________________________"<<endl;
cout<<endl;
cout<< "Enter the amount=>";
cin>>n;
cout<<"______________________________________________________________________"<<endl;
switch (1){
case 1:
    Rs_100 = n/100;
    n=n%100;
    cout<<endl;
    cout<< "Rs 100 notes required Of=> "<<Rs_100<<endl;
    cout<<"______________________________________"<<endl;
case 2:
    Rs_50=n/50;
    n=n%50;
    cout<<endl;
    cout<<"Rs 50 notes required Of=> "<<Rs_50<<endl;
    cout<<"______________________________________"<<endl;
case 3:
    Rs_20=n/20;
    n=n%20;
    cout<<endl;
    cout<<"Rs 20 notes required Of=> "<<Rs_20<<endl;
  cout<<"______________________________________"<<endl;
case 4:
    Rs_1=n/1;
    cout<<endl;
    cout<<"Rs 1 coins required Of=> "<<Rs_1<<endl;
    cout<<"______________________________________"<<endl;
}
return 0;
}
