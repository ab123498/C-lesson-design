#include"OW.h" 

void o_water()//������Ʒ 
{
	int i;
	i=u_i;
	time_t timep;//��ǰʱ��Ļ�ȡ 
	time(&timep);
	showTable(2);
	display(2);
	printf("\n��ѡ����Ҫ��������Ʒ��");
	scanf("%s",o_temp.brand);
	printf("\n��ѡ����Ҫ����������:");
	scanf("%d",&o_temp.amount);
	strcpy(o_temp.name,records[i].name);
	strcpy(o_temp.phone,records[i].phone);
	strcpy(o_temp.address,records[i].address);
	strcpy(o_temp.date,ctime(&timep));
}
