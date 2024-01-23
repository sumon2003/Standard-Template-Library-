/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan  //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v(5);
    
    for(int i=0; i<v.size(); i++) cin >> v[i];
    
    // Assending Order
    sort(v.begin(), v.end());  // O(n*log2(n))

    for(auto u : v) cout << u << " ";
    cout << endl;

    vector <int> v1{3, 4, 1, 2, 5};
    
    // Dessending Order
    sort(v1.rbegin(), v1.rend());

    for(auto u : v1) cout << u << " ";
    cout << endl;

    vector <int> v2{10, 20, 30, 40, 50};
    
    // Dessending Order
    sort(v2.begin(), v2.end(), greater<int>());

    for(auto u : v2) cout << u << " ";
    cout << endl;

    


  
   return 0;
}