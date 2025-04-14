#include <stdio.h>
int range[1000005]; //全局数组初始化均为0
int main() {
	int l, r; //分别表示区间左、右端点
	while (scanf_s("%d%d", &l, &r,100)) //不定组输入
		if (r > range[l]) range[l] = r; //读入时，左端点相同，取右端点较大者
	for (l = 0; l <= 1000000; ++l) {
		if (!range[l]) continue; //数组该位置元素值为0，说明没有以该位置为左端点的区间，跳过
		printf("%d ", l); //输出区间左端点
		for (r = range[l]; l <= r; ++l) //继续遍历数组，合并区间，注意用相同的计数变量，注意循环条件
			//中的r是随着合并过程变化的
			if (range[l] > r) r = range[l]; //更新正在合并的区间右端点
		printf("%d\n", --l); //最后依次++l后不满足l<=r，此时l=r+1, 因此应--l，再输出右端点
	}
	return 0;
}