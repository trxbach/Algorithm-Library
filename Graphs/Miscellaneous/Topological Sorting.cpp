int n;
vi adj[N];
bool ck[N];
vi toposort;

void dfs(int u){
    ck[u] = true;
    Fora(v, adj[u]){
        if (!ck[v]){
            dfs(v);
        }
    }
    toposort.pb(u);
}

void toposort(){
    mset(ck);
    ForE(i, 1, n){
        if (!ck[i]){
            dfs(i);
        }
    }
    reverse(bend(toposort));
}
