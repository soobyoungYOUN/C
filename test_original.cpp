#include <stdio.h>
int main()
{
	int num, count, udae, end=1, totalSum, preSum;
	long long int jumin;
	const int adultDay = 56000, adultNight = 46000, adoleDay = 47000, adoleNight = 40000;
	const int kidDay = 44000, kidNight = 37000, oldDay = 44000, oldNight = 37000, baby=0;
	const int max=10, min=1;

	int fee = 0, usage =0;

	char *save;
	char *group, *report; 
	char *day = "�ְ���";							// �־� ���� 

	const float jangae = 0.6, ugong = 0.5, daja = 0.8, preg = 0.85;		// ��� ������ 


	do{										// �ݾ��Է� �ݺ� �۾� 
		printf("������ �����ϼ�.��\n");
		printf("1. �ְ���\n2. �߰���\n");
		scanf("%1d", &num);
		switch(num){
			case 1 : 
				day="�ְ���";
				break;
			case 2 :
				day="�߰���";
				break;
			default :
				printf("�߸� �Է��߽��ϴ�.\n");
				continue;
		}									// �־� ���� 


		printf("�ֹι�ȣ�� �Է��ϼ���\n");	// �ֹι�ȣ �Է� �� ��� ���� 
		scanf("%13d", &jumin);
		int age = (int)(123-(jumin/100000000000));		// ���� 
		if (num==1){
			if(age<=64 && age>=19){		// ���� �־� ��� 
				fee = adultDay, group = "����";
			}
		}
		else if(day=="�߰���" && age<=64 && age>=19){
			fee = adultNight, group = "����";
		}	

		else if(day=="�ְ���" && age<=18 && age>=13){	//	û�ҳ� �־� ��� 
			fee = adoleDay, group = "û�ҳ�"; 
		}	
		else if(day=="�߰���" && age<=18 && age>=13){
		fee = adoleNight, group = "û�ҳ�"; 
		}

		else if(day=="�ְ���" && age<=3 && age>=12){	//	���� �־� ��� 
			fee = kidDay, group ="����";
		}
		else if(day=="�߰���" && age<=3 && age>=12){
			fee = kidNight, group ="����"; 
		}

		else if(day=="�ְ���" && age>=65){	//	���� �־� ��� 
			fee = oldDay, group ="���"; 
		}
		else if(day=="�߰���" && age>=65){
		fee = oldNight, group ="���"; 
		}

		else{
			fee = baby, group = "����";
		}

		printf("�� ���� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��)\n");
		scanf("%d", &count);

		if(count >10 || count < 1){
			printf("�߸� �Է��Ͽ����ϴ�.\n");
			continue;
		}

		printf("�������� �����ϼ���\n");
		printf("1. ���� (���� ���� �ڵ�ó��)\n2. �����\n3. ����������\n4. ���ڳ�\n5. �ӻ��\n");
		scanf("%d", &udae);
		switch(udae){
			case 1 :
				report = "������� ����";
				break;
			case 2 :
				fee=fee * jangae;
				report ="����� �������";
				break;
			case 3 :
				fee=fee * ugong;
				report ="���������� �������";
				break;
			case 4 :
				fee=fee * daja;
				report ="���ڳ� �������";
				break;
			case 5 :
				fee = fee * preg;
				report ="�ӻ�� �������";
				break;
		}

		preSum = fee * count;

		save[usage]=printf("%s %s x\t%d\t%d�� *%s\n", day, group, count, preSum, report);
		++usage;

		printf("������ %d�� �Դϴ�.\n�����մϴ�.\n", preSum);
		printf("��� �߱� �Ͻðڽ��ϱ�?\n1. Ƽ�� �߱�\n2. ����\n"); 
		scanf("%d",&end);

		switch (end){
			case 1:

			case 2:
				printf("Ƽ�� �߱��� �����մϴ�. �����մϴ�.");
				printf("=========== �������� ==========\n");
			for (int i=0;i<=usage;i++){

			}
			printf("����� �Ѿ��� %d�� �Դϴ�.", totalSum);
			printf("===============================\n");

			printf("��� ����(1: ���ο� �ֹ�, 2: ���α׷� ����) : ");
			scanf("%d", &end);
			if (end ==1)
				end=1;
		}
	}while (end == 1);
	return 0;
}
