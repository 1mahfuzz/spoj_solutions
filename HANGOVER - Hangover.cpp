/**
 *  author: mahfuzz
 *  created: 14.12.2020
**/
 
#include <iostream>
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    double c;
    while(cin >> c && c != 0.0){
        int cnt = 0;
        double sum = 0.0;

        for(double i = 2; sum <= c; i++){
            sum += (1 / i);
            cnt++;
        }

        cout << cnt << " card(s)\n";
    }

    return 0;
}
