/**
 *  author: mahfuzz
 *  created: 10.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
const int max_n = 500001;
typedef long long ll;

ll arr[max_n];

ll binSearch(ll n, ll x){
    ll low = 0;
    ll high = n;
    ll res = -1;
    
    while(low <= high){
        int mid = low+(high-low) / 2;
        
        if(arr[mid] == x){
            res = mid;
            high = mid - 1;
        }
        else if(arr[mid] > x){
            high = mid - 1;
        }
        else{
            low = mid+1;
        }
    }
    
    return res;
    
}



int main(int argc, char* argv[]){
    //~ ios_base::sync_with_stdio(0);
    //~ cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    ll n, q; scanf("%lld %lld", &n, &q);
    for(ll i=0; i<n; i++)
        cin >> arr[i];
        
    ll x;
    while(q--){
        scanf("%lld", &x);
        
        printf("%lld\n", binSearch(n, x));
    }
    
    
    
    return 0;
}
