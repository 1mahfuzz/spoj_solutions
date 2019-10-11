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
    
    int n; cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        
        string sa, sb;
        sa = to_string(a);
        sb = to_string(b);
        
        reverse(sa.begin(), sa.end());
        reverse(sb.begin(), sb.end());
        int sum = stoi(sa) + stoi(sb);
        
        string s = to_string(sum);
        
        reverse(s.begin(), s.end());
        cout << stoi(s) << "\n";
        
    }
       
    return 0;
}
