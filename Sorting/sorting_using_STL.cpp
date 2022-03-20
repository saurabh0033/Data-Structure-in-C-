
#include <bits/stdc++.h>
using namespace std;

int main()
{


// C++ program to sort a vector increasing order.
    vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    sort(v.begin(), v.end());

    cout << "Sorted==>";
    for (auto x : v)
        cout << x << " ";







    //C++ program to sort a vector decreasing order.

    vector<int> w{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    sort(w.begin(), w.end(),greater<int>());
    cout<<endl;\
    cout << "Sorted==>";
    for (auto y : w)
        cout << y << " ";

    return 0;
}





