/**
 *  author: mahfuzz
 *  created: 11.10.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
const int MAXN = 500;

int multiply(int x, int res[], int size){
    int carry = 0;
    for(int i = 0; i < size; i++){
        int prod = (res[i] * x) + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    
    while(carry){
        res[size] = carry % 10;
        carry = carry / 10;
        size++;
    }
    return size;
}

void fact(int n){
    int res[MAXN];
    res[0] = 1;
    int size = 1;
    
    for(int i = 2; i <= n; i++)
        size = multiply(i, res, size);
        
    while(--size >= 0)
        cout << res[size];
    cout << "\n";
}

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        fact(n);
    }
       
    return 0;
}
