//
//	PRIME1	
// 
//	author: Mahfuz Ahmed 
// 

#include <bits/stdc++.h>
using namespace std;
#define br std::cout << "\n";
#define flush std::cout<<flush;
#define fori(s,n) for(int i=s;i<n;i++)
#define forj(s,n) for(int j=s;j<n;j++)
#define lli long long int

const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

bool isPrime(int n);

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w","stdout");
    #endif
    
    int n; cin >> n;
    
    while(n--){
		int x, y;
		cin >> x >> y;
		
		fori(x, y+1){
			if(isPrime(i)){
				cout << i; br;
			}
		}
		br;
	}
    
    
    return 0;
}

bool isPrime(int n){
	
	if(n <= 1) return false;
	
	if(n <= 3) return true;
	
	if(n % 2 == 0 || n % 3 == 0)
		return false;
		
	for(int i = 5; i*i <= n; i = i+6){
		if(n%i == 0|| n% (i+2) == 0)
			return false;
	}
	
	return true;
	
}
