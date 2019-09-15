/**
 *  author: mahfuzz
 *  created: 11.09.2019
**/

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
const int max_n = 10000000;
typedef long long ll;

bool mark[max_n+1];
int cnt[max_n+1];
void runSieve(){
    for(ll i = 2; i <= max_n; i++){
        if(!mark[i]){
            for(ll j = i * i; j <= max_n; j += i){
                mark[j] = true;
            }
        }
    }
    
    mark[0] = true;
    mark[1] = true; 
    
    int curr = 0;
    for(int i = 2; i <= max_n; i++){
        if(!mark[i])
            curr++;
        cnt[i] = curr;
    }   
}


int main(int argc, char* argv[]){
    //~ ios_base::sync_with_stdio(0);
    //~ cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    runSieve();
    int t; scanf("%d", &t);
    
    int n;
    while(t--){
        scanf("%d", &n);
        
        int ans = cnt[n] - cnt[n/2];
        printf("%d\n", ans);
        
    }
    
    
    return 0;
}
