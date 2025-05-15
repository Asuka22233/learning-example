//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void print(const vector<int>& v)
//{
//	cout << "v: ";
//	for (int element : v)
//	{
//		cout << element << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int n, e;
//	cin >> n >> e; // 读入n, e
//	vector<int> v(n, e); // 初始化v为n个值为e的元素
//	print(v); // 输出v
//	string s;
//	while (cin >> s) // 循环处理命令
//	{
//		int i, x, flag = 1;
//		if (s == "push_back")
//		{
//			cin >> x;
//			v.push_back(x);
//			// 读入x
//			// push_back
//		}
//		else if (s == "pop_back")
//		{
//			if (v.empty())
//				flag = 0;
//			else
//				v.pop_back();
//			// 若v为空，则flag=0
//			// 否则，pop_back
//		}
//		else if (s == "insert")
//		{
//			cin >> i >> x;
//			if (i < 0 || i > v.size())
//				flag = 0;
//			else
//				v.insert(v.begin() + i, x);
//			// 读入i, x
//			// 若i合法，insert，提示：v.begin() + i
//			// 否则，非法，flag=0;
//		}
//		else if (s == "erase")
//		{
//			cin >> i;
//			if (i < 0 || i >= v.size())
//				flag = 0;
//			else
//				v.erase(v.begin() + i);
//			// 读入i
//			// 若i合法，erase
//			// 否则，非法，flag=0;
//		}
//		else if (s == "clear")
//		{
//			v.clear();
//			// clear
//		}
//		else if (s == "sort")
//		{
//			sort(v.begin(), v.end());
//			// sort
//		}
//		if (flag) // 操作合法，输出v中每个元素
//			print(v);
//		else     // 操作非法，输出错误信息
//			cout << "You can't do that!" << endl;
//	}
//	return 0;
//}