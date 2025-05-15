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
//	cin >> n >> e; // ����n, e
//	vector<int> v(n, e); // ��ʼ��vΪn��ֵΪe��Ԫ��
//	print(v); // ���v
//	string s;
//	while (cin >> s) // ѭ����������
//	{
//		int i, x, flag = 1;
//		if (s == "push_back")
//		{
//			cin >> x;
//			v.push_back(x);
//			// ����x
//			// push_back
//		}
//		else if (s == "pop_back")
//		{
//			if (v.empty())
//				flag = 0;
//			else
//				v.pop_back();
//			// ��vΪ�գ���flag=0
//			// ����pop_back
//		}
//		else if (s == "insert")
//		{
//			cin >> i >> x;
//			if (i < 0 || i > v.size())
//				flag = 0;
//			else
//				v.insert(v.begin() + i, x);
//			// ����i, x
//			// ��i�Ϸ���insert����ʾ��v.begin() + i
//			// ���򣬷Ƿ���flag=0;
//		}
//		else if (s == "erase")
//		{
//			cin >> i;
//			if (i < 0 || i >= v.size())
//				flag = 0;
//			else
//				v.erase(v.begin() + i);
//			// ����i
//			// ��i�Ϸ���erase
//			// ���򣬷Ƿ���flag=0;
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
//		if (flag) // �����Ϸ������v��ÿ��Ԫ��
//			print(v);
//		else     // �����Ƿ������������Ϣ
//			cout << "You can't do that!" << endl;
//	}
//	return 0;
//}