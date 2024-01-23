/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan  //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v{1, 2, 3, 4, 5};
    
    for(auto u : v) cout << u << " ";
    cout << endl;

    v.erase(v.begin());

    for(auto u : v) cout << u << " ";
    cout << endl;

    // Now the array is: 2, 3, 4, 5

    v.erase(v.begin()+2); // 2, 3, 5

    for(auto u : v) cout << u << " ";
    cout << endl;





}