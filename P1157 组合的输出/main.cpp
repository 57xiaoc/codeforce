#include<iostream>

using namespace std;
int n,r;
const int N = 25;

int a[N];
int st[N];

void dfs(int m){
    if(m == r-1){
        for(int i = 0;i<r;i++){
            printf("%3d",a[i]+1);
        }
        printf("\n");
        return ;
    }
    for(int i = a[m]+1;i<n;i++){
        if(!st[i]){
            st[i] = true;
            a[m+1] = i;
            dfs(m+1);
            st[i] = false;
        }
    }
}

int main(){

    freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    cin>>n>>r;
    for(int i = 0;i<n;i++){
        a[0] = i;
        st[i] = true;
        dfs(0);
        st[i] = false;
    }
    

    return 0;
}