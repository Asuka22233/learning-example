//#include <stdio.h>
//#include <stdlib.h>
//
//// 按mode打开文件id.txt
//FILE* Open(int id, char* mode)
//{
//	char fn[20];
//	sprintf(fn, "%d.txt", id);
//	FILE* fp = fopen(fn, mode);
//	return fp;
//}
//int cmp(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2; // 比较函数
//}
//// 从文件中读取一个数据并将其返回，并将flag设为是否成功读入
//int getx(FILE* fp, int* flag)
//{
//	int x;
//	*flag = fscanf(fp, "%d", &x) != EOF;
//	return x;
//}
//// 以上为文件操作辅助函数
//
//int cnt;  // 文件个数
//
//// 将id1.txt和id2.txt中的已经排序好的数据归并，结果放入id.txt，返回id
//int merge(int id1, int id2)
//{
//	int id = ++cnt; // 分配文件编号
//	FILE* fp = Open(id, "w"); // 待写入归并结果的文件
//	FILE* fp1 = Open(id1, "r"), * fp2 = Open(id2, "r"); // 待读取的已经排序好的数据文件
//
//	int flag1, flag2; // 标记文件1,2是否未读完
//	int x1, x2; // 记录在文件1,2中当前遍历到的数据
//
//	// 分别从文件1,2中读取一个数据到x1,x2中，并更新flag1,flag2
//	x1 = getx(fp1, &flag1);
//	x2 = getx(fp2, &flag2);
//
//	/* 以下代码需要你来完成：
//	当文件1,2均未读完时，继续循环：
//		如果x1<x2，则将x1打印至结果文件中，并从文件1中新读入一个数据给x1
//		否则，将x2打印至结果文件中，并从文件2中新读入一个数据给x2
//	若文件1未读完，将未读完的数据依次打印至结果文件中
//	若文件2未读完，将未读完的数据依次打印至结果文件中
//	*/
//	while (flag1 && flag2) 
//	{
//		if (x1 < x2)
//		{
//			fprintf(fp, "%d ", x1);
//			x1 = getx(fp1, &flag1); 
//		}
//		else 
//		{
//			fprintf(fp, "%d ", x2);
//			x2 = getx(fp2, &flag2); 
//		}
//	}
//
//	fclose(fp);
//	fclose(fp1);
//	fclose(fp2);
//	return id; // 返回归并结果文件编号
//}
//
//#define N 250000  // 内存缓冲区最大长度
//int a[N];         // 内存缓冲区
//
//// 读入n个数并排序，结果放入id.txt中，返回id
//int external_sort(int n)
//{
//	int id; // 文件编号
//	if (n > N) // 待排序数据的个数超过内存缓冲区最大长度，采用外部排序的方法
//	{
//		int n1 = n / 2, n2 = n - n1; // 计算两个归并段的长度
//
//		// 先对第1段进行排序，得到结果文件id1.txt
//		int id1 = external_sort(n1);
//		// 再对第2段进行排序，得到结果文件id2.txt
//		int id2 = external_sort(n2);
//
//		// 将两段归并，得到结果文件id.txt
//		id = merge(id1, id2); // 获取结果文件编号id
//	}
//	else // 待排序数据的个数不超过内存缓冲区最大长度，则采用内部排序的方法
//	{
//		/* 以下代码需要你来完成：
//		从标准输入中读取n个数据，存入内存缓冲区-数组a
//		调用qsort函数对数组a进行排序
//		*/
//		for (int i = 0; i < n; ++i) 
//			scanf("%d", &a[i]);
//		qsort(a, n, sizeof(int), cmp); 
//
//
//		id = ++cnt; // 分配文件编号
//		FILE* fp = Open(id, "w"); // 写方式打开结果文件id.txt
//		for (int i = 0; i < n; ++i) // 将排序结果写入id.txt
//			fprintf(fp, "%d ", a[i]);
//		fclose(fp);
//	}
//	return id;  // 返回结果文件编号
//}
//
//int main()
//{
//	/* 以下代码需要你来完成：
//	读入n
//	调用external_sort函数，对读入的n个数据排序，返回结果文件编号id
//	用读方式打开结果文件id.txt
//	将id.txt中的所有数据依次输出至标准输出
//	提示：while(fscanf(...) != EOF) printf(...);
//	*/
//	int n;
//	scanf("%d", &n); 
//	int id = external_sort(n); 
//	FILE* fp = Open(id, "r");
//	int x;
//	while (fscanf(fp, "%d", &x) != EOF) 
//		printf("%d ", x);
//	fclose(fp); 
//
//	return 0;
//}