/**
 *  author: mahfuzz
 *  created: 12.10.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

bool isOperator(char c){
    if(strchr("+-*/^", c) != NULL)
        return true;
    return false;
}
stack<char> STACK;
string get(string exp){
    string str = "";
    for(int i = 0; exp[i]; i++){
        if(exp[i] == '(' || isOperator(exp[i])){
            STACK.push(exp[i]);
        }else{
            if(exp[i] == ')'){
                str += STACK.top();
                STACK.pop();
                STACK.pop();
            }else{
                str += exp[i];
            }
        }
    }
    
    return str;
}

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        
        cout << get(s) << "\n";
    }
    
    return 0;
}
