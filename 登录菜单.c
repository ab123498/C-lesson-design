#include"OW.h"

void rg_menu()//��¼�˵� 
{
	for( ; ; ){
		switch(s_rg_menu())
		{
			case 1:user_login();break;//�û���¼ 
			case 2:ad_login();break;//����Ա��½ 
			case 3:user_register();break;//���û�ע�� 
			case 4:ad_register();break;//����Աע�� 
			case 0:quit();break;
			default:printf("\n�������������ѡ��\n����س������");getchar();getchar();
		}
	}
} 

int s_rg_menu()//��¼�˵���ѡ�� 
{	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//����
		printf("���˵�\n");
		printf("1.�û���¼\n");
		printf("2.����Ա��½\n");
		printf("3.���û�ע��\n");
		printf("0.�˳�����\n");
		printf("�������ֽ���ѡ��:");
		scanf("%d",&choice);
		return choice;
//	}
}
