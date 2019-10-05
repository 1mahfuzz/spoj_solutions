/**
 *  author: mahfuzz
 *  created: 05.10.2019
**/

#include <bits/stdc++.h>
using namespace std;

int fastExpo(int a, int b){
    if(b == 0)
        return 1;
    int dig = fastExpo(a, b/2);
    dig = (dig * dig) % 10;
    
    if(b % 2 == 1) dig = (a * dig) % 10;

    return dig;
}


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        
        cout << fastExpo(a, b) << "\n";
    }
    
    
    return 0;
}
