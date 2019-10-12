/**
 *  author: mahfuzz
 *  created: 12.10.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int a, b, c;
    while(cin >> a >> b >> c){
        if(a == 0 && b == 0 && c == 0){
            break;
        }
        int d = b - a;
        if(abs(c) == abs(d + b)){
            cout << "AP " << c + d << "\n";
        }else{
            d = b / a;
            cout << "GP " << c * d << "\n";
            
        }
    }
       
    return 0;
}
