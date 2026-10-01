#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

const int MAXN = 100005;
int parent[MAXN];
int sz[MAXN];

void dsu_init(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;  
        sz[i] = 1;
    }
}

int dsu_find(int u) {
    if (u == parent[u]) 
        return u;
    return parent[u] = dsu_find(parent[u]); 
}

bool dsu_union(int u, int v) {
    u = dsu_find(u);
    v = dsu_find(v);
    
    if (u != v) {
        if (sz[u] < sz[v]) 
            swap(u, v);
            
        parent[v] = u;
        sz[u] += sz[v];
        return true;
    }
    return false; 
}
bool check(int u,int v){
    return dsu_find(u) == dsu_find(v);
}
int main(){
    
}
