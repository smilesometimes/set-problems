#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


vector<vector<int>>subsets_1(vector<int>& nums) 
{
	vector<vector<int> > result;
	vector<int> a;

	
	for (unsigned int i = 0; i < (1 << nums.size() ); ++i)
	{
		for(unsigned int j = 0; j < nums.size();++j)
		{
			if( ( (1<<j) & i )  != 0 )
			{
				a.push_back(nums[j]);
			}
		}
		sort(a.begin(),a.end());
		result.push_back(a);
		a.clear();
	}
	return result;
}


int main()
{
	int temp_array[] = {1, 2, 3};
	vector<int> myset(temp_array,temp_array+3) ;
	vector<vector<int> > subsets;

	subsets = subsets_1(myset); 

	return 1;
}