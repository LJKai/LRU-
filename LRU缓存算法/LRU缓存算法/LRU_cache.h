#pragma once
#include <unordered_map>
#include "PCB.h"
using namespace std;

class LRU_cache
{
private:
	unordered_map<int, PCB*>cache; //�洢���н�㣬���ڿ��ٲ���
	/*ͷ����β���*/
	PCB* head;
	PCB* tail;
	int size;//�Ѵ�����
	int capacity; //������С
public:
	LRU_cache(int _capacity);
	LRU_cache(LRU_cache&& cache); //�ƶ����캯��
	int get(int key);
	void put(int key, int value);
	void addToHead(PCB* node);
	void removeNode(PCB* node);
	void moveToHead(PCB* node);
	PCB* removeTail();
};

