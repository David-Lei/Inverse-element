#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<iomanip>
#include<cstdlib>
#define MAXN 0x7fffffff
typedef long long LL;
const int N=10005;
using namespace std;
inline LL Getint(){register LL x=0,f=1;register char ch=getchar();while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}while(isdigit(ch)){x=x*10+ch-'0';ch=getchar();}return x*f;}
inline LL pow_mod(LL a,LL b,LL p){
	LL ret=1;
	while(b){
		if(b&1)ret=(ret*a)%p;
		a=(a*a)%p;
		b>>=1;
	}
	return ret;
}
inline LL FeiMa(LL a,LL p){return pow_mod(a,p-2,p);}
int main(){
	LL n=Getint(),p=Getint();
	for(int i=1;i<=n;i++)cout<<FeiMa(i,p)<<'\n';
	return 0;
}