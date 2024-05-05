#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<iomanip>
#include<cstdlib>
#define MAXN 0x7fffffff
typedef long long LL;
const int N=3000005;
using namespace std;
inline LL Getint(){register LL x=0,f=1;register char ch=getchar();while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}while(isdigit(ch)){x=x*10+ch-'0';ch=getchar();}return x*f;}
LL inv[N];
int main(){
	LL n=Getint(),p=Getint();
	inv[1]=1;cout<<1<<'\n';
	for(int i=2;i<=n;i++)inv[i]=(p-p/i)*inv[p%i]%p,cout<<inv[i]<<'\n';
	return 0;
}

