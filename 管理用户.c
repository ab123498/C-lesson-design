#include"OW.h"

void ad_user()//�����û� 
{
	int mark=1;
	int choice=1;
	for( ; mark==1; )
	{
		switch(s_ad_user())
		{
			case 1:{
				showTable(choice);
				display(choice);
				break;
			}break;
			case 2:queryInfo(choice);break;
			case 3:queryInfo(choice);modify_user();break;
			case 4:removeRecord(choice);break;
			case 5:clear_txt(choice);break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n�������������ѡ��:\n����س������");getchar();getchar();
		}
	}
}

int s_ad_user()//�����û���ѡ��
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//����
		printf("�û���Ϣ�˵�\n");
		printf("1.��ʾ�����û���Ϣ\n");
		printf("2.�����û�\n");
		printf("3.�޸��û���Ϣ\n");
		printf("4.ע���û�\n");
		printf("5.����û���Ϣ\n");
		printf("9.������һ��\n");
		printf("0.�˳�����\n");
		printf("\n�������ֽ���ѡ��:");
		scanf("%d",&choice);
		return choice;
//}
 } 
