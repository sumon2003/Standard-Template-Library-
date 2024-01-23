/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan  //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v{1, 2, 3, 4, 5};

    cout << v.back() << endl; // 5
    
    v.pop_back();   // O(1) complexity

    for(auto u : v) cout << u << " ";
    cout << endl;

    cout << v.back() << endl; // 4
    
    // If we want to find first element
    cout << *v.begin() << endl; // 1



}