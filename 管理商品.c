#include"OW.h"

void ad_brand()//������Ʒ 
{
	int mark=1;
	int choice=2;
	for( ; mark==1; )
	{
		switch(s_ad_brand())
		{
			case 1:{
				showTable(choice);
				display(choice);
				break;
			}break;
			case 2:queryInfo(choice);break;
			case 3:modify_water();break;
			case 4:add_water();break;
			case 5:removeRecord(choice);break;
			case 6:clear_txt(choice);break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n�������������ѡ��:\n����س������");getchar();getchar();
		}
	}
}

int s_ad_brand()//������Ʒѡ�� 
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//����
		printf("��Ʒ��Ϣ�˵�\n");
		printf("1.��ʾ������Ʒ��Ϣ\n");
		printf("2.������Ʒ\n");
		printf("3.�޸���Ʒ��Ϣ\n");
		printf("4.������Ʒ\n");
		printf("5.�¼���Ʒ\n");
		printf("6.�����Ʒ��Ϣ\n");
		printf("9.������һ��\n");
		printf("0.�˳�����\n");
		printf("\n�������ֽ���ѡ��:");
		scanf("%d",&choice);
		return choice;
//}
}
