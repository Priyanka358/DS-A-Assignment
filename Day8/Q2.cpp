#include<bits/stdc++.h>
using namespace std;

void find_arr(vector<vector<int> > arr,int k)
{
	int i,j;
        vector<int> arr2;
        vector<pair<int,int> > v;
        int c;
        for(i=0;i<arr.size();i++)
        {
            c=0;
            for(j=0;j<arr[0].size();j++)
            {
                if( arr[i][j]==1)
                {
                    c++;
                }
            }
            v.push_back({c,i});
        }
        
        sort(v.begin(),v.end());
        for(i=0;i<k;i++){
            arr2.push_back(v[i].second);
        }
        for(i=0;i<arr2.size();i++)
        {
        	cout<<arr2[i]<<" ";
		}
return;
}

int main()
{   
 int n,k,m,y;
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
	cin>>k;
   find_arr(arr,k);
return 0;
}
