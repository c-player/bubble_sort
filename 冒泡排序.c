#define _CRT_SECURE_NO_WARNINGS 1

/*升序排序
10个数组进行9趟排序，每趟分别进行9，8，7...1次两两比较，将其中最大一个数放在末尾
flag用于优化冒泡排序
每趟排序前令flag=1，假设排序已经完成
在该趟排序中如果仍在交换元素位置（即排序未完成），令flag=0
若在某趟中排序已经完成，则不进行内层的if比较语句内部，则flag=1，不进行多余排序，跳出外层for循环
*/

#include <stdio.h>

void bubble_sort(int* arr, int sz)
{
	int i, j, temp;
	int flag;
	for (i = 0; i < sz - 1; i++) 
	{
		flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 2,4,7,1,3,5,8,0,9,6 };
	int i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
    return 0;
}