#include"OW.h" 
//��ʼ��
int numUsers=0;//�û���Ϣ���� 
int numWaters=0;//��Ʒ��Ϣ���� 
int numOrders=0;//������Ϣ���� 
UserInfo *records=NULL;//��¼�û���Ϣ������ 
WtInfo *w_records=NULL;//��¼��Ʒ��Ϣ������ 
OrInfo *o_records=NULL;//��¼������Ϣ������ 
char savedTag=0;//��Ϣ�Ƿ��Ѿ�����ı�־��1Ϊδ���棬0Ϊ�Ա��� 
int arraySize;//�����С

//������
int main() 
{
	//��ʼ������
	records=(UserInfo*)malloc(sizeof(UserInfo)*INITIAL_SIZE);
	if(records==NULL)
	{
		printf("memory fail!");
		exit(-1);
	}
	w_records=(WtInfo*)malloc(sizeof(WtInfo)*INITIAL_SIZE);
	if(w_records==NULL)
	{
		printf("memory fail!");
		exit(-1);
	}
	o_records=(OrInfo*)malloc(sizeof(OrInfo)*INITIAL_SIZE);
	if(o_records==NULL)
	{
		printf("memory fail!");
		exit(-1);
	}
	arraySize=INITIAL_SIZE;
	printf("\n");
	//printf("\t***********************************\n");
	printf("\t*            ����һ��             *\n");
	printf("\t*          ��ˮ����ϵͳ           *\n");
	printf("\t*         ��ӭʹ�ñ�ϵͳ          *\n");
	printf("\t***********************************\n");
	printf("\n�س������ϵͳ������");
	getchar();
	rg_menu();
}
