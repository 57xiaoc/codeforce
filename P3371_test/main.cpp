#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
const int N = 5e5+10;
int h[N],e[N],w[N],ne[N],idx;
int dist[N];
bool st[N];
int n,m,s;

void dijsktra(){
    // memset(dist,0x3f,sizeof dist);
    for(int i = 1;i<=n;i++) dist[i] = 2147483647;

    dist[s] = 0;
    priority_queue<pii,vector<pii>,greater<pii> > heap;
    heap.push(make_pair(0,s));
    while(!heap.empty()){
        auto t = heap.top();
        heap.pop();
        int ver = t.second , distance = t.first;
        if(st[ver]) continue;
        st[ver] = true;
        for(int i = h[ver];i!=-1;i = ne[i]){
            int j = e[i];
            if(dist[j]> distance + w[i]){
                dist[j]  = distance +w[i];
                heap.push(make_pair(dist[j],j));
            }
        }
    }

    for(int i = 1;i<=n;i++){
        cout<<dist[i]<<" ";
    }
}
void add(int a,int b, int c){
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx++;
}
int main(){
    
    freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    cin>>n>>m>>s;
    memset(h,-1,sizeof h);
    int u,v,w;
    for(int i = 1;i<=m;i++){
        cin>>u>>v>>w;
        add(u,v,w);
    }
    dijsktra();

    return 0;
}
