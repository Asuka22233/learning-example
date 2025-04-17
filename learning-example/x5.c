//#include <stdio.h>
//#include <stdlib.h>
//
//// ��mode���ļ�id.txt
//FILE* Open(int id, char* mode)
//{
//	char fn[20];
//	sprintf(fn, "%d.txt", id);
//	FILE* fp = fopen(fn, mode);
//	return fp;
//}
//int cmp(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2; // �ȽϺ���
//}
//// ���ļ��ж�ȡһ�����ݲ����䷵�أ�����flag��Ϊ�Ƿ�ɹ�����
//int getx(FILE* fp, int* flag)
//{
//	int x;
//	*flag = fscanf(fp, "%d", &x) != EOF;
//	return x;
//}
//// ����Ϊ�ļ�������������
//
//int cnt;  // �ļ�����
//
//// ��id1.txt��id2.txt�е��Ѿ�����õ����ݹ鲢���������id.txt������id
//int merge(int id1, int id2)
//{
//	int id = ++cnt; // �����ļ����
//	FILE* fp = Open(id, "w"); // ��д��鲢������ļ�
//	FILE* fp1 = Open(id1, "r"), * fp2 = Open(id2, "r"); // ����ȡ���Ѿ�����õ������ļ�
//
//	int flag1, flag2; // ����ļ�1,2�Ƿ�δ����
//	int x1, x2; // ��¼���ļ�1,2�е�ǰ������������
//
//	// �ֱ���ļ�1,2�ж�ȡһ�����ݵ�x1,x2�У�������flag1,flag2
//	x1 = getx(fp1, &flag1);
//	x2 = getx(fp2, &flag2);
//
//	/* ���´�����Ҫ������ɣ�
//	���ļ�1,2��δ����ʱ������ѭ����
//		���x1<x2����x1��ӡ������ļ��У������ļ�1���¶���һ�����ݸ�x1
//		���򣬽�x2��ӡ������ļ��У������ļ�2���¶���һ�����ݸ�x2
//	���ļ�1δ���꣬��δ������������δ�ӡ������ļ���
//	���ļ�2δ���꣬��δ������������δ�ӡ������ļ���
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
//	return id; // ���ع鲢����ļ����
//}
//
//#define N 250000  // �ڴ滺������󳤶�
//int a[N];         // �ڴ滺����
//
//// ����n���������򣬽������id.txt�У�����id
//int external_sort(int n)
//{
//	int id; // �ļ����
//	if (n > N) // ���������ݵĸ��������ڴ滺������󳤶ȣ������ⲿ����ķ���
//	{
//		int n1 = n / 2, n2 = n - n1; // ���������鲢�εĳ���
//
//		// �ȶԵ�1�ν������򣬵õ�����ļ�id1.txt
//		int id1 = external_sort(n1);
//		// �ٶԵ�2�ν������򣬵õ�����ļ�id2.txt
//		int id2 = external_sort(n2);
//
//		// �����ι鲢���õ�����ļ�id.txt
//		id = merge(id1, id2); // ��ȡ����ļ����id
//	}
//	else // ���������ݵĸ����������ڴ滺������󳤶ȣ�������ڲ�����ķ���
//	{
//		/* ���´�����Ҫ������ɣ�
//		�ӱ�׼�����ж�ȡn�����ݣ������ڴ滺����-����a
//		����qsort����������a��������
//		*/
//		for (int i = 0; i < n; ++i) 
//			scanf("%d", &a[i]);
//		qsort(a, n, sizeof(int), cmp); 
//
//
//		id = ++cnt; // �����ļ����
//		FILE* fp = Open(id, "w"); // д��ʽ�򿪽���ļ�id.txt
//		for (int i = 0; i < n; ++i) // ��������д��id.txt
//			fprintf(fp, "%d ", a[i]);
//		fclose(fp);
//	}
//	return id;  // ���ؽ���ļ����
//}
//
//int main()
//{
//	/* ���´�����Ҫ������ɣ�
//	����n
//	����external_sort�������Զ����n���������򣬷��ؽ���ļ����id
//	�ö���ʽ�򿪽���ļ�id.txt
//	��id.txt�е��������������������׼���
//	��ʾ��while(fscanf(...) != EOF) printf(...);
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