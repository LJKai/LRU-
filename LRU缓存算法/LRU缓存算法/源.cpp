#include <iostream>
#include "LRU_cache.h"
#include "PCB.h"

/*mainΪ���԰������ο�����146��*/
int main()
{
	LRU_cache LRUcache = LRU_cache(2); //�ƶ����캯��������������СΪ2
	LRUcache.put(1, 100);
	LRUcache.put(2, 200);
	if (-1 != LRUcache.get(1)) //100����������100�����ã��������ڶ�ͷ
	{
		cout << "1��������" << endl;
	}
	
	LRUcache.put(3, 300);//������СΪ2�����Զ�β��200��ɾ��
	
	if (-1 == LRUcache.get(2))
	{
		cout << "2����������" << endl;
	}
}
