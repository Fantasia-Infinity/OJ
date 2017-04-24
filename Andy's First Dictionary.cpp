#include<cstdio>
#include<set>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
set<string>st;

int main()
{
	string s;
	while(getline(cin,s))
	{
		for(int i=0;i<s.size();i++)
		{
			if(!isalpha(s[i])) continue;
			string w;
			while(isalpha(s[i]))
			{
				w+=tolower(s[i]);
				i++;
			}
			st.insert(w);
		}	
	}
	for(set<string>::iterator iter=st.begin();iter!=st.end();iter++)
	{
		cout<<*iter<<endl;
	}	
	return 0;
}
