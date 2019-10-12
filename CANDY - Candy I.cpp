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
    
    int n;
    while(cin >> n  && n >= 0){
        int arr[n];
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        
        if(sum % n == 0){
            int m = sum / n;
            int cnt = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] > m){
                    cnt += arr[i] - m;
                }
            }
            
            cout << cnt << "\n";
        }else{
            cout << "-1\n";
        }
        
    }
    
    return 0;
}
