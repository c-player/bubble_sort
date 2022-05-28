#define _CRT_SECURE_NO_WARNINGS 1

/*��������
10���������9������ÿ�˷ֱ����9��8��7...1�������Ƚϣ����������һ��������ĩβ
flag�����Ż�ð������
ÿ������ǰ��flag=1�����������Ѿ����
�ڸ���������������ڽ���Ԫ��λ�ã�������δ��ɣ�����flag=0
����ĳ���������Ѿ���ɣ��򲻽����ڲ��if�Ƚ�����ڲ�����flag=1�������ж��������������forѭ��
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