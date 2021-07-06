#include<bits/stdc++.h>
using namespace std;

void sol(vector<vector<int> > arr)
{
	    int res;
        int r=arr.size();
        int c=arr[0].size();
        int k;
        for(int i=0;i<arr.size();i++)
        {
         int maxt=INT_MAX;
         int mint=INT_MIN;
         k=0;
            for(int j=0;j<c;j++)
            {
                if(arr[i][j]<maxt)
                {
              maxt=min(maxt,arr[i][j]);  
              k=j;
                }
            } 
            for(int j=0;j<arr.size();j++)
            {
             mint=max(mint,arr[j][k]);  
            }
            if(maxt==mint)
            {
                res=maxt;
                cout<< res;
                return;
            }  
        }
        cout<< res;
    return;
    }

int main()
{   
 int n,m,y;
    cin>>n>>m;
	vector<vector<int> > arr;
	int i,j;
	for(i=0;i<n;i++)
	{
		vector<int>x;
		for(j=0;j<m;j++)
		{
		cin>>y;
		x.push_back(y);
	    }
	    arr.push_back(x);
	}
   sol(arr);
return 0;
}
