#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "calculator.h"

int main()
{
	while (1)
	{
		double a = 0, b = 0;
		int choice = 0;
		double base = 0;
		int exponent = 0;


		printf("\n====== 계산기 메뉴 ======\n1. 덧셈(+)\n2. 뺄셈(-)\n3. 곱셈(*)\n4. 나눗셈(/)\n5. 나머지(%)\n6. 제곱\n0. 종료\n========================= ");
		printf("원하는 연산 번호를 입력하세요: ");
		scanf("%d", &choice);
		 
		switch (choice)
		{
		case 1:
			printf("첫 번째 숫자 입력: ");
			scanf("%lf", &a);
			printf("두 번째 숫자 입력: ");
			scanf("%lf", &b);

			printf("결과: %lf", add(a, b));
			break;
		case 2:
			printf("첫 번째 숫자 입력: ");
			scanf("%lf", &a);
			printf("두 번째 숫자 입력: ");
			scanf("%lf", &b);

			printf("결과: %lf", subtract(a, b));
			break;
		case 3:
			printf("첫 번째 숫자 입력: ");
			scanf("%lf", &a);
			printf("두 번째 숫자 입력: ");
			scanf("%lf", &b);

			printf("결과: %lf", multiply(a, b));
			break;
		case 4:
			printf("첫 번째 숫자 입력: ");
			scanf("%lf", &a);
			printf("두 번째 숫자 입력: ");
			scanf("%lf", &b);

			if (b == 0)
			{
				printf("0으로 나눌 수는 없습니다.");
				continue;
			}

			printf("결과: %lf", divide(a, b));
			break;
		case 5:
			printf("첫 번째 숫자 입력: ");
			scanf("%lf", &a);
			printf("두 번째 숫자 입력: ");
			scanf("%lf", &b);
			if (b == 0)
			{
				printf("0으로 나눌 수는 없습니다.");
				continue;
			}
			int c, d;
			c = a, d = b;
			printf("결과: %d", modulo(c, d));
			break;
		case 6:
			printf("첫 번째 숫자 입력: ");
			scanf("%lf", &base);
			printf("지수 입력: ");
			scanf("%d", &exponent);

			printf("결과: %lf", power(base, exponent));
			break;
		case 0:
			printf("종료");
			return 0;
		default:
			printf("종료");
			return 0;
		}
	}




	return 0;
}