#include<bits/stdc++.h>

using namespace std;
const int N = 5010;
int a[N];
int n;
int f(int n){
    if(n<=1) return 1;
    else{
        
        if(!a[n-1]){
            a[n-1] = f(n-1);
        }
        if(!a[n-2]){
            a[n-2] = f(n-2);
        }

        return a[n-1]+ a[n-2];
    }
}
int main(){

    // freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    // freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    cin>>n;
    cout<<f(n);
    return 0;
}