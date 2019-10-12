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
    
    int n; cin >> n;
    while(n--){
        int x, y;
        cin >> x >> y;
        
        if(x == y || x - y == 2){
            if(x % 2 == 0 && y % 2 == 0){
                cout << x + y << "\n";
            }else if(x % 2 != 0 && y % 2 != 0){
                cout << (x + y) - 1 << "\n";
            }else{
                cout << "No Number\n";
            }
        }else{
            cout << "No Number\n";
        }
    }
       
    return 0;
}
