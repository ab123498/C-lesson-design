#include"OW.h"

void modify_user()//�޸��û���Ϣ���� 
{
	int i;
	int choice=-1;
	if(numUsers==0)	
	{
		printf("\nû�пɹ��޸ĵļ�¼") ;
		return ;
	} 
	for( ;choice!=9 ; )
	{
		int mark=0;
		i=u_i;
		switch(s_m_user())
		{
			case 1:{
				printf("\nԭ�û���Ϊ��%s",records[i].name);
				printf("\n���������û�����");
				scanf("%s",records[i].name);
				mark=1;
				break;
			}break;
			case 2:{
				printf("\nԭ����Ϊ��%s",records[i].password );
				printf("\n�����������룺");
				scanf("%s",records[i].password );
				mark=1;
				break;
			}break;
			case 3:{
				printf("\nԭ����Ϊ��%s",records[i].phone );
				printf("\n�������º��룺");
				scanf("%s",records[i].phone );
			/*	printf("%s",records[i].phone);
				getchar();
				getchar();*/
				mark=1;
				break;
			}break;
			case 4:{
				printf("\nԭ��ַΪ��%s",records[i].address );
				printf("\n�������µ�ַ��");
				scanf("%s",records[i].address );
				mark=1;
				break;
			}break;
			case 9:choice=9;break;
			case 0:quit() ;
			default:printf("\n�������������ѡ��:\n����س������");getchar();getchar();
		}
		if(mark==1)
		{
			saveRecords(1);
			printf("\n�޸ĳɹ���\n����س��󷵻���һ��") ;
			getchar();
			getchar();
		}
	}
	
}

int s_m_user()//�޸��û���Ϣ�˵���ѡ�� 
{
	int choice=-1;
	while(choice!=0){
		system("cls");//����
		printf("\n�޸Ĳ˵�");
		printf("\n1.�޸��û���");
		printf("\n2.�޸�����");
		printf("\n3.�޸ĵ绰����");
		printf("\n4.�޸��ջ���ַ");
		printf("\n9.������һ��");
		printf("\n0.�˳�����\n");
		printf("\n�������ֽ���ѡ��:");
		scanf("%d",&choice);
		return choice;
}
}
