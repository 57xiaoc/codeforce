#include<bits/stdc++.h>

using namespace std;

// typedef pair<char,int> pci;

int main(){
    
    // freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    // freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    // map<char,int> a;
    string s;
    // cin>>s;
    getline(cin,s); // input: c and cpp

    // 注意与cin.getline 不同
    int ans = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '\n' || s[i] == ' ') continue;
        else ans++;
    }
    cout<<ans;

    return 0;
}
