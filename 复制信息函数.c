#include"OW.h"
//��srcָ���һ����Ϣ���Ƹ�destָ��ļ�¼ 
void copyURecord(UserInfo* src,UserInfo* dest)
{
	strcpy(dest->name,src->name);
	strcpy(dest->password,src->password);
	strcpy(dest->phone,src->phone);
	strcpy(dest->address,src->address);
} 

void copyWRecord(WtInfo* src,WtInfo* dest)
{
	strcpy(dest->brand,src->brand);
	dest->price=src->price;
}

void copyORecord(OrInfo* src,OrInfo* dest)
{
	strcpy(dest->name,src->name);
	strcpy(dest->brand,src->brand);
	strcpy(dest->date,src->date);
	strcpy(dest->phone,src->phone);
	strcpy(dest->address,src->address);
	dest->amount=src->amount;
}
