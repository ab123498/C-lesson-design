#include"OW.h"

void removeOrder(int j)//ɾ��ָ����������
{
	int i,k;
	char str[5];
	int choice=3;
	queryInfo(choice);
	printf("ȷ��Ҫɾ���˶�������Ϣô��(Y/N)");
	scanf("%s",str);
	if(str[0]=='y'||str[0]=='Y')
	{
		numOrders--;
		//�������¼��ǰ�ƶ�
		for(k=o_i[j];k<numOrders;k++) 
		{
			copyORecord(&o_records[k+1],&o_records[k]);
		}
		saveRecords(choice);
	}
 } 
