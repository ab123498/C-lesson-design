#include"OW.h"

void my_info()//�˻���Ϣ
{
	int i;
	int mark=1;
	for( ; mark==1; )
	{
		switch(s_m_info())
		{
			case 1:{
				i=u_i;
				showTable(1);
				printf("\n%s\t%s\t%s",records[i].name,records[i].phone,records[i].address);//�Ѷ���//�� 
				printf("\n�س������...\n") ;
				getchar();
				getchar();
				break;
			}break;
			case 2:modify_user();break;//��
			case 9:mark=0;break;//��
			case 0:quit();break;//��
			default :printf("\n�������������ѡ��:\n����س������");getchar();getchar();
		 } 
	}
 } 
 
 
int s_m_info()//�˻���Ϣѡ�� 
{
	int choice=-1;
//	while(choice!=0)
//	{
		system("cls");//����
		printf("�˻���Ϣ�˵�\n");
		printf("1.��ʾ�ҵ��˻���Ϣ\n");//�� 
		printf("2.�޸��ҵ��˻���Ϣ\n");//�� 
		printf("9.������һ��\n");//��
		printf("0.�˳�����\n");//��
		printf("\n�������ֽ���ѡ��:");//��
		scanf("%d",&choice);
		return choice;
//	}
}
