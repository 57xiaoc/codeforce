#include<bits/stdc++.h>

using namespace std;
const int N = 110;
int a[N];
int n;
int main(){

    // freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    // freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    cin>>n;
    for(int i = 1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    int x = 0 ;
    int ans = 0;
    for(int i = 1;i<=n;i++){
        if(a[i]!=x){
            x = a[i];
            ans++;
        }
    }
    cout<<ans<<endl;
    x = 0 ;
    for(int i = 1;i<=n;i++){
        if(a[i]!=x){
            x = a[i];
            cout<<a[i]<<' ';
        }
    }
    return 0;
}