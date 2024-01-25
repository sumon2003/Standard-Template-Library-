/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan  //*/

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    vector <int> v{1, 1, 2, 2, 3, 3, 3, 4, 5};

    unique(v.begin(), v.end());

    for(auto u : v) cout << u << " ";
    cout << endl;

    sort(v.begin(), v.end());
    unique(v.begin(), v.end()) - v.begin();
    
    for(auto u : v) cout << u << " ";
    cout << endl;






}