#include <stdio.h>
main(void)
{
	//int number1 = 1;
	////printf(number1); ��¾ȵ�
	//printf("%d", number1);
	////��ȣ:1 �̷��� ǥ���ϰ� ����
	//printf("��ȣ: %d", number1);
	////printf("��ȣ: %d\n ���� :", number1);���ڰ� �ϳ��� ������ ����
	//printf("��ȣ: %d\n ���� :", number1, number1);

	//2 * 3 = 6
	//����: ������ 3�� �����ؼ�
	//��Ʈ: ���ϱ�� *�� ����Ѵ�.


	/*int number2 = 2;
	int number3 = 3;
	int number6 = 6;
	printf("��ȣ: %d", number2,number3,number6);*/

	int num1, num2, result;
	num1 = 2;
	num2 = 3;
	result = num1 * num2;
	printf("%d * %d = %d", num1,num2,result);

	return 0;
}