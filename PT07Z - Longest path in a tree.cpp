/**
 *  author: mahfuzz
 *  created: 15.12.2020
**/
 
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
typedef long long ll;

const int maxn = 10001;

vector<int> tree[maxn];
bool visited[maxn];
int dist[maxn];

void dfs(int source){
    if(visited[source])
        return;

    visited[source] = true;

    for(auto x : tree[source]){
        if(!visited[x]){
            dist[x] = dist[source] + 1;
            dfs(x);
        }
    }

}


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n; cin >> n;

    for(int i = 0; i < n - 1; i++){
        int u, v; cin >> u >> v;

        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1);

    int far = 0;
    for(int i = 1; i <= n; i++)
        far = (dist[far] < dist[i] ? i : far);
    
    memset(dist, 0, sizeof dist);
    memset(visited, false, sizeof visited);

    dfs(far);

    far = 0;
    for(int i = 1; i <= n; i++)
        far = max(far, dist[i]);
    

    cout << far << "\n";


    return 0;
}
