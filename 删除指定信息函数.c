#include"OW.h"

void removeRecord(int choice)//ɾ��ָ����Ϣ���� 1Ϊ�û���2Ϊ��Ʒ��3Ϊ���� 
{
	int i,j;
	char str[5];
	if(choice==1)
	{
		queryInfo(choice);
		printf("\nȷ��Ҫɾ�����û�����Ϣô��(Y/N)");
		gets(str);
		if(str[0]=='y'||str[0]=='Y')
		{
			numUsers--;
			//�������¼��ǰ�ƶ�
			for(j=u_i;j<numUsers;j++) 
			{
				copyURecord(&records[j+1],&records[j]);
			}
			saveRecords(choice);
		}
	}
	if(choice==2)
	{
		queryInfo(choice);
		printf("\nȷ��Ҫɾ������Ʒ����Ϣô��(Y/N)");
		gets(str);
		if(str[0]=='y'||str[0]=='Y')
		{
			numWaters--;
			//�������¼��ǰ�ƶ�
			for(j=w_i;j<numWaters;j++) 
			{
				copyWRecord(&w_records[j+1],&w_records[j]);
			}
			saveRecords(choice);
		}
	}
/*	if(choice==3)
	{
		queryInfo(choice);
		printf("ȷ��Ҫɾ���˶�������Ϣô��(Y/N)");
		gets(str);
		if(str[0]=='y'||str[0]=='Y')
		{
			numOrders--;
			//�������¼��ǰ�ƶ�
			for(j=o_i;j<numOrders;j++) 
			{
				copyORecord(&o_records[j+1],&o_records[j]);
			}
		}
	}*/
	printf("\nɾ���ɹ�\n�س������������");
	getchar();
	getchar();
//	savedTag=1;
 } 
