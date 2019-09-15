/**
 *  author: mahfuzz
 *  created: 10.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int max_n = 1e6+5;
typedef long long ll;


int main(int argc, char* argv[]){
    //~ ios_base::sync_with_stdio(0);
    //~ cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int t; scanf("%d", &t);
    
    while(t--){
        ll arr[10000];
        int n; scanf("%d", &n);
        
        ll total = 0;
        ll cnt = 0;
        for(int i = 0; i < n; i++){
            scanf("%lld", &arr[i]);
            
            total += arr[i];
            if(total <= 0){
                cnt += abs(total)+1;
                total = 1;
            }
        }
        
        printf("%lld\n", cnt);
            
    }
    
    
    return 0;
}
