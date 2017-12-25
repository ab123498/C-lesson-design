#include"OW.h"
//1Ϊ�û���Ϣ��2Ϊ��Ʒ��3Ϊ���� ,4�ǹ���Ա 
int loadRecords(int choice)
{
	FILE *fp;
//	char fname[30];
	numUsers=0;
	numWaters=0;
	numOrders=0;
	if(choice==1||choice==4)
	{
		fname=select_file(choice);
		if((fp=fopen(fname,"rb"))==NULL)
		{
			printf("�򲻿��ļ���\n");
			return -1;
		}
		printf("\n��ȡ�ļ��С�����\n");
		while(!feof(fp))
		{
			//�ռ䲻����������ռ� 
			if(numUsers>=arraySize)
			{
				records=realloc(records,(arraySize+INCR_SIZE)*sizeof(UserInfo));
				if(records==NULL)
				{
					printf("��ȡʧ��!");
					exit(-1);
				}
			}
			if(fread(&records[numUsers],sizeof(UserInfo),1,fp)!=1) break;
			numUsers++;
		}
		if(choice==1) land=1;
		if(choice==4) land=4;
		fclose(fp);
		printf("���ڹ���%d����Ϣ��",numUsers);
		return 0;
		}
	if(choice==2)
	{
		fname=select_file(choice);
		if((fp=fopen(fname,"rb"))==NULL)
		{
			printf("�򲻿��ļ���\n");
			return -1;
		}
		printf("\n��ȡ�ļ��С�����\n");
		while(!feof(fp))
		{
			//�ռ䲻����������ռ� 
			if(numWaters>=arraySize)
			{
				w_records=realloc(w_records,(arraySize+INCR_SIZE)*sizeof(WtInfo));
				if(w_records==NULL)
				{
					printf("��ȡʧ��!");
					exit(-1);
				}
			}
			if(fread(&w_records[numWaters],sizeof(WtInfo),1,fp)!=1) break;
			numWaters++;
		}
		
		fclose(fp);
		printf("���ڹ���%d����Ϣ��",numWaters);
		return 0;
		}	
	if(choice==3)
	{
		fname=select_file(choice);
		if((fp=fopen(fname,"rb"))==NULL)
		{
			printf("�򲻿��ļ���\n");
			return -1;
		}
		printf("\n��ȡ�ļ��С�����\n");
		while(!feof(fp))
		{
			//�ռ䲻����������ռ� 
			if(numOrders>=arraySize)
			{
				o_records=realloc(o_records,(arraySize+INCR_SIZE)*sizeof(OrInfo));
				if(o_records==NULL)
				{
					printf("��ȡʧ��!");
					exit(-1);
				}
			}
			if(fread(&o_records[numOrders],sizeof(OrInfo),1,fp)!=1) break;
			numOrders++;
		}
		
		fclose(fp);
		printf("���ڹ���%d����Ϣ��",numOrders);
		return 0;
		}	
}
