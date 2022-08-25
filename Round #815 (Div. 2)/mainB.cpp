#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int a[N];
// typedef pair<char,int> pci;

int main(){
    
    // freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    // freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        for(int i = 0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        cout<<a[n-1]+a[n-2] - a[0] - a[1]<<endl;
    }
    return 0;
}
