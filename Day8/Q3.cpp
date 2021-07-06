#include<bits/stdc++.h>
using namespace std;

void find_neg(vector<vector<int> > arr)
{
	int i,j;
        int c=0;
        for(i=0;i<arr.size();i++)
        {
            for(j=0;j<arr[0].size();j++)
            {
                if(arr[i][j]<0)
                    c++;
            }
        }
        cout<< c;
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
   find_neg(arr);
return 0;
}
