#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll n,c;
const int N = 2e5+10;
ll a[N];

int main(){
    
    // freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    // freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    cin>>n>>c;
    for(int i = 0;i<n;i++) cin>>a[i];
    ll ans = 0;
    sort(a,a+n);
    for(int i = 0;i<n;i++){
        ans += (upper_bound(a,a+n,a[i]+c)-a)-(lower_bound(a,a+n,a[i]+c)-a);
    }
    cout<<ans;


    return 0;
}
