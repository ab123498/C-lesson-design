#include"OW.h" 
void queryInfo(int choice)//��ѯָ����Ϣ����
{
	char target[50];
	int i,j=0;
/*	numUsers=0;
	numWaters=0;
	numOrders=0;*/
	if(choice==1)
	{
		loadRecords(choice);//�ȶ�ȡ������Ϣ 
		if(numUsers==0)	
	{
		printf("û�м�¼�ɹ�����");
		return ;
	}
		printf("\n����������ѯ���û�����");
		scanf("%s",target);
	/*	u_i*/i=findRecord(target,0/*Ĭ�ϲ��ҷ�ʽΪ�û���*/,choice,0);
		u_i=i;
		if(i==-1) 
		{
			printf("û������û���\n");
			getchar();
			getchar();
			return ; 
		}
		showTable(choice);
		printf("\n%s\t%s\t%s",records[i].name,records[i].phone,records[i].address);
	} 
	if(choice==2)
	{
		loadRecords(choice);//�ȶ�ȡ������Ϣ 
		if(numWaters==0)	
	{
		printf("û�м�¼�ɹ�����");
		return ;
	}
		printf("\n����������ѯ����Ʒ���ƣ�");
		scanf("%s",target);
		/*w_i*/i=findRecord(target,0/*Ĭ�ϲ��ҷ�ʽΪ��Ʒ��*/,choice,0);
		w_i=i;
		if(i==-1) 
		{
			printf("û�������Ʒ��\n");
			getchar();
			getchar();
			return ;
		}
		showTable(choice);
		printf("\n%s\t%f",w_records[i].brand,w_records[i].price);
	} 
	if(choice==3)
	{
		loadRecords(choice);//�ȶ�ȡ������Ϣ 
		if(numOrders==0)	
	{
		printf("û�м�¼�ɹ�����");
		return ;
	}
		printf("\n����������ѯ���µ��û�����");
		scanf("%s",target);
		/*o_i*/i=findRecord(target,0/*Ĭ�ϲ��ҷ�ʽΪ�û���*/,choice,0);
		j=0;
		o_i[j]=i;
		if(i==-1) 
		{
			printf("���û��޶�����¼��\n");
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
	}
	printf("\n����س��������"); 
	getchar();
	getchar();
}
