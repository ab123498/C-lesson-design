#include"OW.h" 
/*
������target:��������Ϣ��ĳһ����target��ͬ
	  targetType����������һ����ң�Ĭ��0,�����ѡ��ʽ. 
	  choice��ѡ�����������Ϣ 1�û���2��Ʒ��3���� 
	  from:��ʲôλ�ÿ�ʼ���� 
���أ��ҵ�����Ϣ����ţ����Ҳ����򷵻�-1. 
*/
int findRecord(char* target,int targetType,int choice,int from)//����ָ����Ϣ���� 
{	
	int i;
	if(choice==1)
	{
		for(i=from;i<numUsers;i++)
		{
			if((targetType==0&&strcmp(target,records[i].name)==0))//||(targetType==1&&strcmp(target,records[i].phone))
			return i;
		}
		return -1;
	}
	if(choice==2)
	{
		for(i=from;i<numWaters;i++)
		{
			if((targetType==0&&strcmp(target,w_records[i].brand)==0))
			return i;
		}
		return -1;
	}
	if(choice==3)
	{
		for(i=from;i<numOrders;i++)
		{
			if((targetType==0&&strcmp(target,o_records[i].name)==0))
			return i;
		}
		return -1;
	}
}
