#include"OW.h" 

void my_order()//�ҵĶ��� 
{
	show_my_o();//��ʾ�ҵ����ж���
	int mark=1;
	int j;
	for( ; mark==1; )
	{
		switch(s_my_order())
		{
			case 1:{
				show_my_o();//��ʾ�ҵ����ж���
			}break;
			case 2:{
				show_my_o();
				printf("��ѡ����Ҫ�޸ĵĶ�����");
				scanf("%d",j);
				j=j-1;
				modify_order(j);//�޸Ķ�����Ϣ���� 
				break;
			};break;
			case 3:{
				show_my_o();
				printf("��ѡ����Ҫɾ���Ķ�����");
				scanf("%d",j);
				removeOrder(j-1);
				break;
			};break;
			case 9:mark=0;break;
			case 0:quit();break;
			default :printf("\n�������������ѡ��:\n����س������");getchar();getchar();
		 } 
	}
}

int s_my_order()//�û����������ѡ��
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//����
		printf("�û������˵�\n");
		printf("1.��ʾ�������\n");
		printf("2.�޸Ķ���\n");
		printf("3.ȡ������\n");
		printf("9.������һ��\n");
		printf("0.�˳�����\n");
		printf("�������ֽ���ѡ��:");
		scanf("%d",&choice);
		return choice;
//	}
 } 
