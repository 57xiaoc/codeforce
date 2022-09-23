#include<bits/stdc++.h>

using namespace std;

int main(){
    
    // freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    // freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    stack<int> s;
    int n;
    while(cin>>n){
        if(n!=0) s.push(n);
    }
    while(!s.empty()){
        cout<<s.top()<<' ';
        s.pop();
    }
    return 0;
}