#include"OW.h"

void user_login()
{
	int i,mark=0;
	int choice;
	char name[20];
	char password[30];
	loadRecords(1);//��ȡ�û���Ϣ�ļ� 
	for( ; ; )
	{
		system("cls");//����
		printf("\n�����������û�����");
		scanf("%s",name);
		u_i=findRecord(name,0,1,0);//���Ҹ��û��� 
		i=u_i;
		if(i==-1)
		{
			printf("\n���û��������ڣ�����������\n���س��������");
			getchar();
			getchar();
		}
		else break;
	}
	for( ; ; )
	{
		printf("\n�������������룺");
		scanf("%s",password);
		if(strcmp(password,records[i].password)!=0)
		{	
			printf("\n���벻��ȷ�����������룺\n���س������");
			getchar();
			getchar();
		}
		else 
		{
			mark=1;
			break;
			}
	}
	if(mark==1)
	{
		land=1;
		printf("\n��½�ɹ�!\n���س������");
		getchar();
		getchar();
		u_menu();//��½֮��Ķ�����
	} 
}
