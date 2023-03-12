#include<iostream>
#include<cstring>
#include<cstdio>
#include<queue>
#include<vector>
#include<cmath>
#include<limits.h>
#include<algorithm>

#define Sc(a) scanf("%d",&a) 
#define Sc2(a,b) scanf("%d%d",&a,&b)
#define Pr(a) printf("%d\n",a);
#define Mp make_pair
#define Mem(a,b) memset(a,b,sizeof(a))
#define dis(a,b) ((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]))
#define father for(int i=0;i<=n;++i)fa[i]=i

using namespace std;

int n,q,h;
int temp;
int tot=0;
int Count=0;
int x[3000];
int y[3000];
int fa[3000];
int cost[3000];

struct edge
{
	int u;
	int v;
	int val;
};
edge a[2000 * 2000];

vector<int>c[3000];

int get(int x)
{
	if (fa[x]==x) return x;
	return fa[x]=get(fa[x]);
}

int Kruscal(void)
{
	int sum=0,cnt=0;
    for (int i=1;i<=tot;++i)
    {
    	int fu=get(a[i].u);
    	int fv=get(a[i].v);
    	int val=a[i].val;
    	if (fu==fv) continue;
    	sum+=val;
    	fa[fu]=fv;
    	if (++cnt==n-1) break;
	}
	return sum;
}
//计算最短路 

inline bool cmp(edge p1,edge p2) {
	return p1.val<p2.val;
}

void work(void)
{
	Mem(x,0);
	Mem(y,0);
	Mem(cost,0);
	Sc2(n,q);
	for (int i=0;i<3000;++i)
	    c[i].clear();
	for (int i=0;i<q;++i)
	{
		int m;
		Sc2(m,cost[i]);
		for (int j=1;j<=m;++j) 
		{
			Sc(temp);
			c[i].push_back(temp);
		}
	}
	for (int i=1;i<=n;++i) Sc2(x[i],y[i]);
	//input
	
	tot=0;
	for (int i=1;i<=n;++i)
	    for (int j=i+1;j<=n;++j)
		    a[++tot]=edge{i,j,dis(i,j)}; 
	sort(a+1,a+tot+1,cmp);
	
	father;
	int ans=Kruscal();
	for (int i=0;i<(1<<q);++i)
	//枚举套餐的选择方案 
	{
		father;
		int spend=0;
		for (int j=0;j<q;++j)
		//枚举二进制位数 
		{
			if (((i>>j)&1)==0) continue;
			//第j位为0则不选择套餐
			spend+=cost[j];
			//累计费用 
			for (int k=1;k<c[j].size();++k) 
			{
				int point1=get(c[j][0]);
				int point2=get(c[j][k]);
				fa[point1]=point2;
			}
			//将同一个套餐内的点加进一个集合&缩点 
		}
		ans=min(ans,spend+Kruscal());
	}
	
	printf("%d",ans);
}
int main(void)
{
	int T;
	h=T;
	Sc(T);
	while (T--) 
	{
	    work();
	    if (T) printf("\n\n");
	    else printf("\n");
	}
	return 0;
}
