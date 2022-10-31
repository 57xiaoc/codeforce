#include<iostream>

using namespace std;

const int N = 22;
int a[N],b[N],st[N];
int n,k;
int ans = 0;
bool isprime(int x){
    if (x < 2) return false;
    for (int i = 2; i <= x / i; i ++ )
        if (x % i == 0)
            return false;
    return true;
}
void dfs(int q){
    if(q == k-1){
        // just a number is or not a prime;
        int sum = 0;
        for(int i = 0;i<k;i++){
            sum += a[b[i]];
        }
        if(isprime(sum)) ans++;

        return;
    }
    for(int i = b[q] + 1;i<n;i++){
        if(!st[i]){
            b[q+1] = i;
            st[i] = true;
            dfs(q+1);
            st[i] = false;
        }
    }

}
int main(){
    freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    cin>>n>>k;
    for(int i = 0;i<n;i++) cin>>a[i];
    // sort(a,a+n);
    for(int i = 0;i<n;i++){
        b[0] = i;
        st[i] = true;
        dfs(0);
        // st[i] = false;
    }
    cout<<ans;
    return 0;

}