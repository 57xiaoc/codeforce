#include<bits/stdc++.h>

using namespace std;
int n,m;
const int N = 1e6+10;
int a[N];

int main(){
    
    // freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    // freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    cin>>n>>m;
    for(int i = 0;i<n;i++) cin>>a[i];
    int q;
    while (m--){
        cin>>q;
        int k = lower_bound(a,a+n,q) - a;
        if(a[k] == q) cout<<k+1<<' ';
        else cout<<-1<<' ';
        
    }


    return 0;
}
