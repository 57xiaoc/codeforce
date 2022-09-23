#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int a[N];
int n;
void quicksort(int l,int r){
    if(l>=r) return;
    int x = a[l+r>>1] , i = l-1,j = r+1;
    while(i<j){
        do i++;while (a[i]<x);
        do j--;while(a[j]>x);
        if(i<j) swap(a[i],a[j]);
        else break;
    }
    quicksort(l,j);
    quicksort(j+1,r);
}
int main(){

    // freopen("../in.txt","r",stdin);   //从文件mid.in里读取数据
    // freopen("../out.txt","w",stdout);   //程序运行会创建文件mid.out将结果写入
    cin>>n;
    for(int i = 1;i<=n;i++) scanf("%d",&a[i]);
    quicksort(1,n);
    for(int i = 1;i<=n;i++) printf("%d ",a[i]);
}