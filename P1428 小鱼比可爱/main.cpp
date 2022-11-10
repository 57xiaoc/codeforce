#include<bits/stdc++.h>

using namespace std;

const int N = 110;
int a[N];

int main(){
    
    freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++) cin>>a[i];
    cout<<0<<' ';
    int i = 2;
    while(i<=n){
        int ans = 0;
        for(int j = i-1;j!=0;j--) if(a[j]<a[i]) ans ++;
        cout<<ans<<' ';
        i++;
    }
    return 0;
}
