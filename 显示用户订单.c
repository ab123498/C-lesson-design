#include"OW.h" 

void show_my_o()//��ʾ�ҵ�����������
{
	char target[50];
//	char *p=target;
	int i,j=0;
	int choice=3;
	loadRecords(choice);//�ȶ�ȡ������Ϣ 
		if(numOrders==0)	
	{
		printf("û�м�¼�ɹ�����");
		return ;
	}
	//	printf("\n����������ѯ���µ��û�����");
	//	gets(target);
		strcpy(target,records[u_i].name);
		/*o_i*/i=findRecord(target,0/*Ĭ�ϲ��ҷ�ʽΪ�û���*/,choice,0);
		j=0;
		o_i[j]=i;
		if(i==-1) 
		{
			printf("��û�ж�����¼��\n");
			getchar();
			getchar();
			return ;
		}
		showTable(choice);
		while(i!=-1)
		{
		//	printf("\n%d.%s\t%s\t%d\t%s",j+1,o_records[i].name,o_records[i].brand,o_records[i].amount,o_records[i].date);
			i=findRecord(target,0,choice,i+1);
			if(i!=-1)
			{
				j=(j+1)%N;//ȡģ����������j=0,N=5,��ô��j=(0+1)%5=1..2..3..4..0..1..2..3..4..0..1; 
				o_i[j]=i;
			}
		}
		for(j=0;j<N;j++)
		{
			i=o_i[j];
			printf("\n%d.%s\t%s\t%d\t%s\t%s\t%s",j+1,o_records[i].name,o_records[i].brand,o_records[i].amount,o_records[i].phone,o_records[i].address,o_records[i].date);
		}
		printf("\n����س��������");
		getchar();
		getchar();
} 
