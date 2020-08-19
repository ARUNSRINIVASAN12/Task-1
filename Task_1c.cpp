#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(8);	
	v.push_back(7);
	v.push_back(16);
	v.push_back(9);
	v.push_back(43);
	
	vector<int> data,ans;
	vector< pair<int,int> > s;
	vector<int>::iterator it;
	
	for(int i=0;i<v.size();i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			data.push_back(v[i]*v[j]);
			s.push_back({v[i],v[j]});
		}
	}
	
	int n,x,y,a,b;
	
	cout<<int(0)<<" "<<int(1)<<"\n";
	cout<<flush;
	cin>>n;
	
	it=find(data.begin(),data.end(),n);
	x=s[it-data.begin()].first;
	y=s[it-data.begin()].second;
	
	cout<<int(0)<<" "<<int(2)<<"\n";
	cout<<flush;
	cin>>n;
	
	it=find(data.begin(),data.end(),n);
	a=s[it-data.begin()].first;
	b=s[it-data.begin()].second;
	
	if(x==a || x==b)
	{
		ans.push_back(x);
		ans.push_back(y);
		
		if(x==a)
		ans.push_back(b);
		else
		ans.push_back(a);
	}
	else
	{
		ans.push_back(y);
		ans.push_back(x);
		
		if(y==a)
		ans.push_back(b);
		else
		ans.push_back(a);
	}
	
	cout<<int(3)<<" "<<int(4)<<"\n";
	cout<<flush;
	cin>>n;
	
	it=find(data.begin(),data.end(),n);
	x=s[it-data.begin()].first;
	y=s[it-data.begin()].second;
	
	cout<<int(3)<<" "<<int(5)<<"\n";
	cout<<flush;
	cin>>n;
	
	it=find(data.begin(),data.end(),n);
	a=s[it-data.begin()].first;
	b=s[it-data.begin()].second;
	
	if(x==a || x==b)
	{
		ans.push_back(x);
		ans.push_back(y);
		
		if(x==a)
		ans.push_back(b);
		else
		ans.push_back(a);
	}
	else
	{
		ans.push_back(y);
		ans.push_back(x);
		
		if(y==a)
		ans.push_back(b);
		else
		ans.push_back(a);
	}
	
	for(int i=0;i<ans.size();i++)
	cout<<ans[i]<<" ";
	
	cout<<flush;
	return 0;
}
