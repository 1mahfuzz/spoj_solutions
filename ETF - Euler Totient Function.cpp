/**
 *  author: mahfuzz
 *  created: 21.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
const int max_n = 1000001;
typedef long long ll;

int phi[max_n];
bool mark[max_n];

void getPhi(){
    for(int i = 1; i <= max_n; i++)
        phi[i] = i;
    
    for(int i = 2; i <= max_n; i++){
        if(!mark[i]){
            phi[i] = i - 1;
            for(int j = i * 2; j <= max_n; j += i){
                phi[j] -= phi[j] / i;
                mark[j] = true;
            }
        }
    }
    
}

int main(int argc, char* argv[]){
    //~ ios_base::sync_with_stdio(0);
    //~ cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    getPhi();
    
    int t; scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int a; scanf("%d", &a);
        
        printf("%d\n", phi[a]);
    }
    
    
    return 0;
}
