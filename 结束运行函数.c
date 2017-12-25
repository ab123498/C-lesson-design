#include"OW.h" 
void quit()
{
	int j;
/*	char str[5];
	if(savedTag==1)
	{
		printf("\n是否保存已修改的记录？（Y/N)"); 
		scanf("%s",str);
		if(str[0]=='y'||str[0]=='Y')
			{
				for(j=1;j<=3;j++)
				{
					saveRecords(j);//文件批量储存函数 1为用户，2为商品，3为订单 
				}
			}
	}*/
	if(land=1) saveRecords(1);
	saveRecords(2);
	saveRecords(3);
	free(records);
	free(w_records);
	free(o_records);
	system("cls");//清屏
	printf("\n");
	printf("\t***********************************\n");
	printf("\t*           感谢您的使用          *\n");
	printf("\t***********************************\n");
	exit(-1);
}
