#include"OW.h"

void ad_login()
{
	int choice;
	int i;
	int mark=0;
	char name[20];
	char password[30];
	loadRecords(4);
	for( ; ; )
	{
		system("cls");//����
		printf("\n�����������û�����");
		scanf("%s",name);
		i=findRecord(name,0,1,0);
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
		land=4;
		printf("\n��½�ɹ�!\n���س������");
		getchar();
		getchar();
		ad_menu();//��½֮��Ķ�����	
	} 
}
