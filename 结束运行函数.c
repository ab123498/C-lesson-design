#include"OW.h" 
void quit()
{
	int j;
/*	char str[5];
	if(savedTag==1)
	{
		printf("\n�Ƿ񱣴����޸ĵļ�¼����Y/N)"); 
		scanf("%s",str);
		if(str[0]=='y'||str[0]=='Y')
			{
				for(j=1;j<=3;j++)
				{
					saveRecords(j);//�ļ��������溯�� 1Ϊ�û���2Ϊ��Ʒ��3Ϊ���� 
				}
			}
	}*/
	if(land=1) saveRecords(1);
	saveRecords(2);
	saveRecords(3);
	free(records);
	free(w_records);
	free(o_records);
	system("cls");//����
	printf("\n");
	printf("\t***********************************\n");
	printf("\t*           ��л����ʹ��          *\n");
	printf("\t***********************************\n");
	exit(-1);
}
