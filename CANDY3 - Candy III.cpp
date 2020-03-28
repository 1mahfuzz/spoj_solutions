/**
 *  author: mahfuzz
 *  created: 28.03.2020
**/
 
#include <iostream>
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll sum = 0;
        
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            sum += x;
            sum = sum % n;
        }
        
        if(sum == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
        
    return 0;  
}
