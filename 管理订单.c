#include"OW.h" 

void ad_order()//������ 
{
	int j;
	int mark=1;
	int choice=3;
	for( ; mark==1; )
	{
		switch(s_ad_order())
		{
			case 1:{
				display(choice);
				break;
			}break;
			case 2:queryInfo(choice);break;
			case 3:{
				printf("\n��ѡ����Ҫ�޸ĵĶ�����");
				scanf("%d",j);
				modify_order(j-1);//�޸Ķ�����Ϣ���� 
				break;
				break;
			} 
			case 4:{
				printf("\n��ѡ����Ҫɾ���Ķ�����");
				scanf("%d",j);
				removeOrder(j-1);
				break;
				break;
			}break;
			case 5:clear_txt(choice);break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n�������������ѡ��:\n����س������");getchar();getchar();
		}
	}
}

int s_ad_order()//��������ѡ�� 
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//����
		printf("������Ϣ�˵�\n");
		printf("1.��ʾ���ж�����Ϣ\n");
		printf("2.���Ҷ���\n");
		printf("3.�޸Ķ�����Ϣ\n");
		printf("4.ɾ������\n");
		printf("5.��ն���\n");
		printf("9.������һ��\n");
		printf("0.�˳�����\n");
		printf("\n�������ֽ���ѡ��:");
		scanf("%d",&choice);
		return choice;
//}
 } 
