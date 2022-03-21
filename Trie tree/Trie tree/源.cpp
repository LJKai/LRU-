#include <iostream>
#include "Trie.h"
using namespace std;

/*mainΪ���԰������ο�����208��*/
int main()
{
	Trie trie;
	trie.insert("apple");
	/*apple�����Ƿ��Ѿ��洢�������򷵻�true,�����ڷ���false*/
	bool a = trie.search("apple");
	if (a)
	{
		cout << "apple����" << endl;
	}
	/*app�����Ƿ��Ѿ��洢�������򷵻�true,�����ڷ���false*/
	bool b = trie.search("app");     // ���� False
	if (!b)
	{
		cout << "app���ʲ�����" << endl;
	}
	/*appǰ׺�Ƿ��Ѿ��洢�������򷵻�true,�����ڷ���false*/
	bool c = trie.startsWith("app"); // ���� True
	if (c)
	{
		cout << "appǰ׺����" << endl;
	}
	return 0;
}
