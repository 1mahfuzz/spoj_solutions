/**
 *  author: mahfuzz
 *  created: 11.10.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> m(n), w(n);
        for(int i = 0; i < n; i++)
            cin >> m[i];
        for(int i = 0; i < n; i++)
            cin >> w[i];
        
        sort(m.rbegin(), m.rend());
        sort(w.rbegin(), w.rend());
        
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum += m[i] * w[i];
        
        cout << sum << "\n";
    }
       
    return 0;
}
