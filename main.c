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


		printf("\n====== ���� �޴� ======\n1. ����(+)\n2. ����(-)\n3. ����(*)\n4. ������(/)\n5. ������(%)\n6. ����\n0. ����\n========================= ");
		printf("���ϴ� ���� ��ȣ�� �Է��ϼ���: ");
		scanf("%d", &choice);
		 
		switch (choice)
		{
		case 1:
			printf("ù ��° ���� �Է�: ");
			scanf("%lf", &a);
			printf("�� ��° ���� �Է�: ");
			scanf("%lf", &b);

			printf("���: %lf", add(a, b));
			break;
		case 2:
			printf("ù ��° ���� �Է�: ");
			scanf("%lf", &a);
			printf("�� ��° ���� �Է�: ");
			scanf("%lf", &b);

			printf("���: %lf", subtract(a, b));
			break;
		case 3:
			printf("ù ��° ���� �Է�: ");
			scanf("%lf", &a);
			printf("�� ��° ���� �Է�: ");
			scanf("%lf", &b);

			printf("���: %lf", multiply(a, b));
			break;
		case 4:
			printf("ù ��° ���� �Է�: ");
			scanf("%lf", &a);
			printf("�� ��° ���� �Է�: ");
			scanf("%lf", &b);

			if (b == 0)
			{
				printf("0���� ���� ���� �����ϴ�.");
				continue;
			}

			printf("���: %lf", divide(a, b));
			break;
		case 5:
			printf("ù ��° ���� �Է�: ");
			scanf("%lf", &a);
			printf("�� ��° ���� �Է�: ");
			scanf("%lf", &b);
			if (b == 0)
			{
				printf("0���� ���� ���� �����ϴ�.");
				continue;
			}
			int c, d;
			c = a, d = b;
			printf("���: %d", modulo(c, d));
			break;
		case 6:
			printf("ù ��° ���� �Է�: ");
			scanf("%lf", &base);
			printf("���� �Է�: ");
			scanf("%d", &exponent);

			printf("���: %lf", power(base, exponent));
			break;
		case 0:
			printf("����");
			return 0;
		default:
			printf("����");
			return 0;
		}
	}




	return 0;
}