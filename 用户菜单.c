#include"OW.h"

void u_menu()//�û��˵�
{
	int mark=1;
	for( ; mark==1; )
	{
	
		switch(s_u_menu())
		{
			case 1:o_water();add_order();break;
			case 2:my_order();break;
			case 3:my_info();break;
			case 4:help();break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n�������������ѡ��:\n����س������");getchar();getchar();
		}
	}
 } 
 
 
int s_u_menu()//�û��˵���ѡ��
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//����
		printf("�û��˵�\n");
		printf("1.������Ʒ\n");
		printf("2.�ҵĶ���\n");
		printf("3.�˻���Ϣ\n");
		printf("4.����\n");
		printf("9.�˳���¼\n");
		printf("0.�˳�����\n");
		printf("\n�������ֽ���ѡ��:");
		scanf("%d",&choice);
		return choice;
//	}
}
