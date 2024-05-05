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
inline void Exgcd(int a,int b,LL &x,LL &y,LL &d){
	if(!b)d=a,x=1,y=0;
	else Exgcd(b,a%b,y,x,d),y-=x*(a/b);
}
LL p;
inline int inv(int a,LL b){
	LL d,x,y;
	Exgcd(a,b,x,y,d);
	return d==1?(x%p+p)%p:-1;
}
int main(){
	int n=Getint();
	p=Getint();
	for(int i=1;i<=n;i++)cout<<inv(i,p)<<'\n';
	return 0;
}

