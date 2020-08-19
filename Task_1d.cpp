#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	long long int n,r,x,y,ans;
	cin>>n>>r>>x>>y;
	
	ans=r;
	
	vector<int> con(n),scn(n);
	
	for(int i=0;i<n;i++)
	cin>>con[i];
	
	for(int i=0;i<n;i++)
	cin>>scn[i];
	
	for(int i=0;i<n;i++)
	{
		if(con[i]==1)
		{
			if(con[i]==scn[i])
			ans+=x;
			else
			ans-=y;
		}
	}
	
	if(ans>r)
	cout<<"promoted";
	else
	if(ans<r)
	cout<<"demoted";
	else
	cout<<"no change";
	
	return 0;
}
