#include<iostream>
#include<cassert>
#include<algorithm>

using namespace std;

int main()
{
	int y;
	cin>>y;
	
	string s;
	cin>>s;
	
	if(y%2==1)
	{
		cout<<"0";
		exit(0);
	}
	
	int x=0;
	
	while(1)
	{
		for(int i=0;i<y/2;i++)
		{
			if(s[i]!=s[y/2 + i])
			{
				cout<<x;
				exit(0);
			}
		}
		
		y=(y/2);
		x+=1;
		
		if(y%2==1)
		{
			cout<<x;
			break;
		}
	}
	
	return 0;
}
