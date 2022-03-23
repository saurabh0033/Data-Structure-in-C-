// Cup Finals
/*Sample Input-
3
5 3 4
5 3 1
5 5 0
Sample Output-
YES
NO
YES
*/

#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,d;
        cin>>x>>y>>d;
        if(abs(x-y)<=d){
            cout<< "YES"<<endl;
        }
        else{
            cout<< "NO"<<endl;
        }
    }
}
