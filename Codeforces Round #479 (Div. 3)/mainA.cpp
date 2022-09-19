#include<iostream>

using namespace std;


int main(){
    // freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    // freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    int n, k;
    cin>>n>>k;
    while(k--){
        if(n%10 == 0) n /= 10;
        else{
            n -= 1;
        }
    }
    cout<<n<<endl;
    return 0;
    
}