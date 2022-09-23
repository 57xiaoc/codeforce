#include<bits/stdc++.h>

using namespace std;

const int N = 110;
char a[N][N];
int n,m;
int dx[8] = {0,0,-1,1,-1,1,-1,1};
int dy[8] = {-1,1,0,0,-1,-1,1,1};
int main(){
    
    // freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    // freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    cin>>n>>m;
    for(int i= 1;i<=n;i++) 
        for(int j = 1;j<=m;j++) cin>>a[i][j];
    for(int i= 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(a[i][j] == '*') cout<<'*';
            else{
                int ans = 0;
                for(int k = 0;k<8;k++){
                    if(i+dx[k]>=1&&i+dx[k]<=n&&j+dy[k]>=1&&j+dy[k]<=m&&a[i+dx[k]][j+dy[k]] == '*') ans++;
                }
                cout<<ans;
            }
        }
        cout<<endl;
    } 
        
    return 0;
}
