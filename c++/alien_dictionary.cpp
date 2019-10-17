#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>v(1000);
vector<string>w(5);
int n;
int vis[26]={0};
int mark[26]={0};
stack<int>s;

int dfs(int i)
{
	vis[i]=1;
	int j;
	for(j=0;j<v[i].size();j++)
		{
			if(vis[v[i][j]]==0)
				dfs(v[i][j]);
		}
	s.push(i);
}
int main()
 {
    w={"baa", "abcd", "abca", "cab", "cad"};
    // w={"xww", "wxyz", "wxyw", "ywx", "ywz"};
    n=w.size();
    int i,j,k=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            k=0;
            int p=w[i].size();
            int q=w[j].size();
            while(k<min(p,q) && w[i][k]==w[j][k])
                k++;
            if(k==min(p,q))
                break;
            else
            {
                v[w[i][k]-'a'].push_back(w[j][k]-'a');
                mark[w[i][k]-'a']=1;
                mark[w[j][k]-'a']=1;
                break;
            }
            
        }
    }
    for(i=0;i<26;i++)
    {
    	if(vis[i]==0 && mark[i]==1)
    		dfs(i);
    }
    while(!s.empty())
    {
    	cout<<char(s.top()+'a')<<endl;
    	s.pop();
    }
}