*****************************************
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那两个整数，并返回他们的数组下标。

你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。

给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*****************************************
*****************************************
Time：2019-9-8
Author：要养萨摩耶
*****************************************



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
				cout << i <<"  "<< j << endl;
			}
		}
	}
	system("pause");
}