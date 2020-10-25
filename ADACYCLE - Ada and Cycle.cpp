/**
 *  author: mahfuzz
 *  created: 24.10.2020
**/
 
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int maxn = 2010;

vector<int> adj[maxn];
bool used[maxn];
int dist[maxn];

int bfs(int source){
    queue<int> q;

    q.push(source);
    used[source] = true;
    dist[source] = 0;

    while(!q.empty()){
        int u = q.front(); q.pop();

        for(int x : adj[u]){
            if(used[x] == 1 && x == source){ //check for cycle
                //if there is a cycle which leads to the source node
                //then just return the distance.
                return dist[u] + 1;
            }
            if(!used[x]){
                used[x] = true;
                dist[x] = dist[u] + 1;
                q.push(x);
            }
        }
    }
    return 0;
}

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, x; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            if(x)
                adj[i].push_back(j);
        }
    }

    for(int i = 0; i < n; i++){
        memset(used, 0, sizeof used);
        memset(dist, 0, sizeof dist);
        x = bfs(i);
        if(x != 0)
            cout << x << "\n";
        else
            cout << "NO WAY\n";
    }
    
    
        
    return 0;
}
