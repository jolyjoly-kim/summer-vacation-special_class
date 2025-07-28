#include <stdio.h>
main(void)
{
	//int number1 = 1;
	////printf(number1); 출력안됨
	//printf("%d", number1);
	////번호:1 이렇게 표기하고 싶음
	//printf("번호: %d", number1);
	////printf("번호: %d\n 나이 :", number1);인자가 하나라서 오류가 난다
	//printf("번호: %d\n 나이 :", number1, number1);

	//2 * 3 = 6
	//조건: 변수를 3개 선언해서
	//힌트: 곱하기는 *를 사용한다.


	/*int number2 = 2;
	int number3 = 3;
	int number6 = 6;
	printf("번호: %d", number2,number3,number6);*/

	int num1, num2, result;
	num1 = 2;
	num2 = 3;
	result = num1 * num2;
	printf("%d * %d = %d", num1,num2,result);

	return 0;
}