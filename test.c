#pragma warning(disable:4996)
#include<stdio.h>
////ʵ�ּ�����
//void caidan()
//{
//	printf("****************************************\n");
//	printf("******    1.jiafa     2.jianfa    ******\n");
//	printf("******   3.chengfa     4.chufa    ******\n");
//	printf("******           0.exte           ******\n");
//	printf("****************************************\n");
//}
//int jia(int x, int y)
//{
//	return x + y;
//}
//int jian(int x, int y)
//{
//	return x - y;
//}
//int cheng(int x, int y)
//{
//	return x * y;
//}
//int chu(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int s = 0;
//	caidan();
//	do {
//		//jisuan[5]���Ǻ���ָ�����顣
//		int(*jisuan[5])(int,int) = {NULL,jia,jian,cheng,chu};
//		printf("��������Ҫѡ��ļ��㷽ʽ��");
//		scanf("%d", &s);
//		if (s > 5)
//		{
//			printf("������������ԣ�\n");
//			continue;
//		}
//		if (s == 0)
//		{
//			printf("�˳��ɹ�!");
//			break;
//		}
//		int x = 0;
//		int y = 0;
//		printf("������������Ҫ���������");
//		scanf("%d %d", &x, &y);
//		int z = (jisuan[s])(x, y);
//		printf("����ǣ�%d\n", z);
//	} while (s);
//	return 0;
//}



////�ص�����
//void caidan()
//{
//	printf("****************************************\n");
//	printf("******    1.jiafa     2.jianfa    ******\n");
//	printf("******   3.chengfa     4.chufa    ******\n");
//	printf("******           0.exte           ******\n");
//	printf("****************************************\n");
//}
//
//int jia(int x, int y)
//{
//	return x + y;
//}
//int jian(int x, int y)
//{
//	return x - y;
//}
//int cheng(int x, int y)
//{
//	return x * y;
//}
//int chu(int x, int y)
//{
//	return x / y;
//}
//
//int quan(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("��������Ҫ�������������");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//int main()
//{
//	caidan();
//	int s = 0;
//	printf("��������ѡ��ļ��㷽ʽ��");
//	scanf("%d", &s);
//	switch (s)
//	{
//	case 0:
//		printf("�˳��ɹ�");
//		break;
//	case 1:
//		printf("����ǣ�%d\n", quan(jia));
//		main();//�õݹ���Ҫ������֮���������������򣬻��ܽ����㡣
//		break;
//	case 2:
//		printf("����ǣ�%d\n", quan(jian));
//		main();
//		break;
//	case 3:
//		printf("����ǣ�%d\n", quan(cheng));
//		main();
//		break;
//	case 4:
//		printf("����ǣ�%d\n", quan(chu));
//		main();
//		break;
//	default:
//		printf("����������������룺\n");
//		main();
//	}
//	return 0;
//}



////ð������
//int paixu(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int q = 1;
//	for (i = 0; i < sz - 1; i++)//���м���
//	{
//		for (j = 0; j < (sz - 1 - i); j++)//��������
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int n = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = n;
//				q--;
//			}
//		}
//		if (q == 1)
//		{
//			break;
//		}
//	}
//}
//
//void dayin(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	paixu(arr, sz);
//	dayin(arr, sz);
//	return 0;
//}



//