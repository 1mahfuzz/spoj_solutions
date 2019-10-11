/**
 *  author: mahfuzz
 *  created: 11.10.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int get(int n){
    int cnt = 0, five = 5;
    while(n >= five){
        cnt += n / five;
        five *= 5;
    }
    return cnt;
}

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << get(n) << "\n";
    }
       
    return 0;
}
