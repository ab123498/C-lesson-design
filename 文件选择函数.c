#include"OW.h" 
char username[]="user.dat";
char watername[]="water.dat";
char ordername[]="order.dat";
char adname[]="ad.dat";
char* select_file(int choice)//�ļ�ѡ�����������ļ���1Ϊ�û��ļ���2Ϊ��Ʒ�ļ���3Ϊ�����ļ���4Ϊ����Ա�ļ� 
{
	
	switch(choice)
	{
		case 1:return username;break;
		case 2:return watername;break;
		case 3:return ordername;break;
		case 4:return adname;break;
	}
}
