#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int> nums = { 15,11,7,3,2,1};
	int target = 9;
	for (int i = 0; i < nums.size(); ++i)
	{
		for (int j = i + 1; j < nums.size(); ++j)
		{
			if (nums[i] + nums[j] == target)
			{
				cout << i << j << endl;
			}
		}
	}
	system("pause");
}