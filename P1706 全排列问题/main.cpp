#include<iostream>

using namespace std;
int n;
const int N = 12;
int a[N];
bool st[N];
void dfs(int q){
    if(q == n){
        for(int i = 0;i<n;i++) printf("%5d",a[i]+1);
        printf("\n");
    }

    for(int i = 0;i<n;i++){
        if(!st[i]){
            st[i] = true;
            a[q] = i;
            dfs(q+1);
            st[i] = false;
        }
    }
}
int main(){

    freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入

    cin>>n;
    dfs(0);
    return 0;
}