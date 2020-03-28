/**
 *  author: mahfuzz
 *  created: 28.03.2020
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << #x << ":" << x << "\n";

string addition(string s, string add){
    string q = "";
    reverse(all(s));
    reverse(all(add));
    
    int carry = 0;
    for(int i = 0; s[i]; i++){
        int x = s[i] - '0';
        int y = 0;
        if(i < add.size())
            y = add[i] - '0';
        y += carry;
        
        int z = x + y;
        if(z > 9){
            carry = 1;
            z = z % 10;
        }else{
            carry = 0;
        }
        
        q += to_string(z);
    }
    
    reverse(all(q));    
    return q;
}

string subtract(string s, string sub){
    string q = "";
    reverse(all(s));
    reverse(all(sub));
    
    int carry = 0;
    for(int i = 0; s[i]; i++){
        int x = s[i] - '0';
        int y = 0;
        if(i < sub.size())
            y = sub[i] - '0';
        y += carry;
        
        if(x > y){
            int str = (x - y);
            q += to_string(str);
            carry = 0;
        }else if(x < y){
            x += 10;
            int str = (x - y);
            q += to_string(str);
            carry = 1;
        }else{
            carry = 0;
            q += "0";
        }
    }
    
    reverse(all(q));    
    return q;
}

string divide(string s){
    string q = "";
    int carry = 0, i;
    for(i = 0; s[i]; i++){
        int x = s[i] - '0';
        int b = (carry * 10 + x) / 2;
        q += to_string(b);
        carry = (carry * 10 + x) % 2;
    }
    
    return q;
}


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string s, k; 
    while(cin >> s >> k){        
        string sub = subtract(s, k);
        
        string a = divide(sub);
        string b = addition(a, k);
        
        bool flag = false;
        for(int i = 0; i < b.size(); i++){
            if(flag)
                cout << b[i];
            if(b[i] != '0' && !flag){
                cout << b[i];
                flag = true;
            }
        }
        
        cout << "\n";
        flag = false;
        for(int i = 0; i < a.size(); i++){
            if(flag)
                cout << a[i];
            if(a[i] != '0' && !flag){
                cout << a[i];
                flag = true;
            }
        }
        
        cout << "\n";
    }
    return 0; 
}
