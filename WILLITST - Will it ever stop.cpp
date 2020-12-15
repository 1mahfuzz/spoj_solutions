/**
 *  author: mahfuzz
 *  created: 15.12.2020
**/
 
#include <iostream>
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    ll n; cin >> n;
    
    if(__builtin_popcountll(n) == 1)
        cout << "TAK\n";
    else
        cout << "NIE\n";

    return 0;
}
