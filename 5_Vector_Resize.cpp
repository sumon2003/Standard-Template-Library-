/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan  //*/

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector <int> v1(5), v2(10);
    
    for(auto u : v1)cout << u << " ";
    cout << endl;
    for(auto u : v2)cout << u << " ";
    cout << endl;
    
    cout << "Size of V1 = " << v1.size() << endl;
    cout << "Size of V2 = " << v2.size() << endl;

    v1.resize(10);
    v2.resize(20);

    for(auto u : v1)cout << u << " ";
    cout << endl;
    for(auto u : v2)cout << u << " ";
    cout << endl;

    cout << "ReSize of V1 = " << v1.size() << endl;
    cout << "ReSize of V2 = " << v2.size() << endl;







}