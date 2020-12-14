/**
 *  author: mahfuzz
 *  created: 14.12.2020
**/
 
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n; 
    while(cin >> n && n != 0){
        queue<int> q;
        stack<int> s;

        for(int i = 0; i < n; i++){
            int x; cin >> x;
            q.push(x);
        }

        int cnt = 1;
        while(!q.empty() || cnt != n + 1){
            if(q.empty() && s.top() != cnt)
                break;

            if(q.front() == cnt){
                cnt++;
                q.pop(); 
            }else if(!s.empty() && s.top() == cnt){
                cnt++;
                s.pop();
            }else{
                int x = q.front();
                s.push(x);
                q.pop();
            }
        }

        if(cnt - 1 == n)
            cout << "yes\n";
        else
            cout << "no\n";

    }
    
        
        
    return 0;
}
