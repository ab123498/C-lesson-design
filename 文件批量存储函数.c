#include"OW.h"
/*
�ļ��������棺1Ϊ�û���2Ϊ��Ʒ��3Ϊ���� 
*/ 
int saveRecords(int choice)
{
	FILE *fp;
//	char fname[30];
	if(choice==1||choice==4) 
	{
		fname=select_file(choice);
		if(numUsers==0)
		{
			printf("û����Ϣ�ɴ棡");
			return -1; 
		}
		if((fp=fopen(fname,"wb"))==NULL)
		{
			printf("�ļ�����ʧ�ܣ�\n");
			return -1;
		}
		printf("\n���ļ��С�����\n");
		fwrite(records,sizeof(UserInfo)*numUsers,1,fp);
		fclose(fp);
		printf("%d���ļ�����ɹ��������������\n",numUsers);
		savedTag=0;
		return 1;
	}
		if(choice==2) 
	{
		fname=select_file(choice);
		if(numWaters==0)
		{
			printf("û����Ϣ�ɴ棡");
			return -1; 
		}
		if((fp=fopen(fname,"wb"))==NULL)
		{
			printf("�ļ�����ʧ�ܣ�\n");
			return -1;
		}
		printf("\n���ļ��С�����\n");
		fwrite(w_records,sizeof(WtInfo)*numWaters,1,fp);
		fclose(fp);
		printf("%d���ļ�����ɹ��������������\n",numWaters);
		savedTag=0;
		return 1;
	}
		if(choice==3) 
	{
		fname=select_file(choice);
		if(numOrders==0)
		{
			printf("û����Ϣ�ɴ棡");
			return -1; 
		}
		if((fp=fopen(fname,"wb"))==NULL)
		{
			printf("�ļ�����ʧ�ܣ�\n");
			return -1;
		}
		printf("\n���ļ��С�����\n");
		fwrite(o_records,sizeof(OrInfo)*numOrders,1,fp);
		fclose(fp);
		printf("%d���ļ�����ɹ��������������\n",numOrders);
		savedTag=0;
		return 	1;
	}
}
