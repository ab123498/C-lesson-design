#include"OW.h" 

void ad_menu()//����Ա�˵� 
{
	int mark=1; 
	for( ; mark==1; )
	{
	
		switch(s_ad_menu())
		{
			case 1:ad_brand();break;
			case 2:ad_order();break;
			case 3:ad_user();break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n�������������ѡ��:\n����س������");getchar();getchar();
		}
	}
 } 

int s_ad_menu()//����Ա�˵���ѡ��
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//����
		printf("����Ա�˵�\n");
		printf("1.������Ʒ��Ϣ\n");
		printf("2.��������Ϣ\n");
		printf("3.�����û���Ϣ\n");
		printf("9.�˳���¼\n");
		printf("0.�˳�����\n");
		printf("�������ֽ���ѡ��:");
		scanf("%d",&choice);
		return choice;
//	}
}

