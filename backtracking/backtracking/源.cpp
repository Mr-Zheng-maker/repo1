////#include<iostream>
////#include<vector>
////using namespace std;
////
////
////
//////�����㷨
/////*ģ��
////void backtracking(����)
////{
////	if (��ֹ����)
////	{
////		��Ž��;
////		return;
////	}
////	for (ѡ�񣺱��㼯����Ԫ�أ����нڵ㺢�ӵ��������Ǽ��ϵĴ�С��)
////	{
////		����ڵ㣻
////		backtracking(·����ѡ���б�)��
////		���ݣ�������������
////	}
////}*/
//// 
////class Solution {
////private:
////	vector<vector<int>> result;  //�����洢���յĽ��
////	vector<int> path;  //�������������·��
////	
////public:
////	void backtracking(int n, int k, int startIndex)
////	{
////		if (path.size() == k)
////		{
////			result.push_back(path);
////			return;
////		}
////		for (int i = startIndex; i <= n; ++i)
////		{
////			path.push_back(i);   //����ڵ�
////			backtracking(n, k, i + 1);  // �ݹ飺�����������������ע����һ������Ҫ��i+1��ʼ
////			path.pop_back();  //����
////		}
////	}
////};
//
////��֦����
////void backtracking(int n, int k, int startIndex)
////{
////	if (path.size() == k)
////	{
////		result.push_back(path);
////		return;
////	}
////	//��֦
////	for (int i = startIndex; i <= n-(k-path.size())+1; ++i)
////	{
////		path.push_back(i);   //����ڵ�
////		backtracking(n, k, i + 1);  // �ݹ飺�����������������ע����һ������Ҫ��i+1��ʼ
////		path.pop_back();  //����
////	}
////}
//
////int main()
////{
////	Solution s;
////	vector<int> vec = { 1,2,3,4 };
////	int n = vec.size();
////	int k = 2;
////	s.backtracking(n, k, 1);
////}
//
//
////���������[1,2,3,4,5,6,7,8,9]����������ҵ���Ϊn��k���������
////class Solution1 {
////public:
////	vector<vector<int>> result;
////	vector<int> path;
////	void backtracking(int targetSum,int n, int k, int sum, int startIndex)
////	{
////		if (path.size() == k)
////		{
////			if (targetSum == sum)
////			{
////				result.push_back(path);	
////			}
////			return;
////		}
////		for (int i = startIndex; i <= n; ++i)
////		{
////			sum += i;
////			path.push_back(i);
////			backtracking(targetSum, n, k, sum, i + 1);
////			sum -= i;
////			path.pop_back();
////		}
////	}
////private:
////
////};
////
////int main()
////{
////	Solution1 s1;
////	vector<int> vec = { 1,2,3,4,5,6,7,8,9 };
////	int n = vec.size();
////	int k = 3;
////	int targetsum = 9;
////	s1.backtracking(targetsum,n, k,0, 1);
////}
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//vector<int> path;
//vector<int> fun(vector<int> arr, int n)
//{
//	int startindex = 0;
//	int endindex = 0;
//	int index = 0;
//	int maxindex = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				index++;
//				/*startindex = i;
//				endindex = j;*/
//			}
//		}
//		path.push_back(index+1);	
//		index = 0;
//	}
//	int max = path[0];
//	for (int j = 1; j < n; ++j)
//	{
//		if (path[j] > max)
//		{
//			max = path[j];
//			maxindex = j;
//		}
//		
//	}
//	int val = path[maxindex];
//
//	for (int i = maxindex; i < n; ++i)
//	{
//		if (arr[maxindex] == arr[i])
//		{
//			val--;
//		}
//		if (val == 0)
//		{
//			endindex = i+1;
//			break;
//		}
//	}
//	vector<int> vec;
//	vec.push_back(maxindex);
//	vec.push_back(endindex);
//	return vec;
//}
//
//int main()
//{
//	int n;
//	vector<int> vec;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		cin >> num;
//		vec.push_back(num);
//	}
//	vector<int> vec1 = fun(vec, n);
//	cout << vec1[0]-1 << " " << vec1[1]+1 << endl;
//	return 0;
//}
//
////	vector<vector<int>> result;
////	vector<int> path;
////void backtracking(int n,int start,int *arr)
////{
////	int startindex;
////	int endindex;
////	int index = 0;
////	if (index < n)
////	{	
////		result.push_back(path);
////		return;
////	}
////	for (int i = 1; i <= n; ++i)
////	{
////		path.push_back(arr[i]);
////	    index = i+1;
////		if (arr[i] == arr[index])
////		{
////			path.push_back(arr[index]);
////			index++;
////	   }
////		
////		backtracking(n,i+1,arr);
////		path.pop_back();
////	}
////  
////}
//
