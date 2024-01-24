/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan  //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v1, v2;

    // Way = 1 ---------------

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    cout << v1[0] << " " << v1[1] << " " << v1[2] << " " << v1[3] << " " << v1[4] << endl;


// Way = 2 ---------------

    for(int i=0; i<5; i++)
    {
        int element;
        cin >> element;

        v2.push_back(element);
    }

    // Print the array using "auto".
    for(auto u : v2) cout << u << " ";
    cout << endl;
    


}
