#include"OW.h" 

void add_water()//�����ƷƷ�� 
{
	int mark=0;
	char str[5];
	printf("\n��������Ʒ���ƣ�");
	scanf("%s",w_temp.brand );
	printf("\n��������Ʒ�۸�");
	scanf("%f",&w_temp.price );//ע���ַ����ʹ�á�
	printf("\n��˶���Ʒ��Ϣ��") ;
	showTable(2);
	printf("\n%s\t%f",w_temp.brand,w_temp.price);
	printf("\nȷ�ϱ���ô��(Y/N)");
	scanf("%s",str);
	if(str[0]=='y'||str[0]=='Y')
	{
		printf("1");
		mark=a_saveRecords(2);	
	//	mark=1;
	}
	if(mark==1) 
	{
		printf("\n��ӳɹ���");
	}
	else printf("\n���ʧ��!"); 
	printf("\n���س��󷵻���һ��...");
	getchar();
	getchar();
}
