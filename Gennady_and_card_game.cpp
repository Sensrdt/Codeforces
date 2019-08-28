#include<bits/stdc++.h>

using namespace std;

int main()
{
	int flag = 0;
	string s, s1;
	cin>>s;
	for (int i=0;i<5;i++)
	{
		cin>>s1;
		if (s[1] == s1[1] || s[0] == s1[0])
		{
			flag = 1;
		}
	}
	
	if(flag)
	{
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	cout<<"\n";
	
	return 0;
}
