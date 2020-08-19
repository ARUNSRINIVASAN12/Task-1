#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void func_sub(string &s,int i)
{
	if(s[i]==49)
	{
		s[i]=48;
	}
	else
	{
		s[i]=49;
		func_sub(s,i-1);
	}
}

void func_add(string &s,int i)
{
	if(s[i]==48)
	{
		s[i]=49;
	}
	else
	{
		s[i]=48;
		func_add(s,i-1);
	}
}

int main()
{
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	if(n==count(&s[0],&s[0]+s.length(),49) || n==1)
	cout<<"-1";
	else
	{
		string t,r;
		t=r=s;
		
		func_sub(t,t.length()-1);
		func_add(r,r.length()-1);
		
		cout<<t<<" "<<r;
	}
	
	return 0;
}
