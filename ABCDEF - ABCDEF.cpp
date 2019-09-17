/**
 *  author: mahfuzz
 *  created: 17.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 10000000007;
//~ const int max_n = 1000005;
typedef long long ll;


int main(int argc, char* argv[]){
    //~ ios_base::sync_with_stdio(0);
    //~ cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n; scanf("%d", &n);
    int arr[101];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    
    vector<int> right, left;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                left.push_back(arr[i] * arr[j] + arr[k]);
                if(arr[k] == 0) continue;
                right.push_back((arr[i] + arr[j]) * arr[k]);
            }
        }
    }
    
    sort(right.begin(), right.end());
    sort(left.begin(), left.end());
    
    int cnt = 0;
    for(int i = 0; i < left.size(); i++){
        int l = lower_bound(right.begin(), right.end(), left[i]) - right.begin();
        int u = upper_bound(right.begin(), right.end(), left[i]) - right.begin();
        
        cnt += (u - l);
    }
    
    printf("%d\n", cnt);
    
    return 0;
}
