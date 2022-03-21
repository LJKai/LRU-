#include "Trie.h"

Trie* Trie::searchPrefix(string prefix)
{
	Trie* node = this;
	for (char G : prefix)
	{
		G -= 'a'; //�������ĸ��Ӧ�±�
		if (node->dict[G] == nullptr)
		{
			return nullptr;
		}
		node = node->dict[G];
	}
	return node;
}

Trie::Trie() :dict(26)/*ָ����С��Ӧ26����ĸ*/, isEnd(false)
{
}

void Trie::insert(string word)
{
	Trie* node = this;
	for (char A : word)
	{
		A -= 'a';//�������ĸ��Ӧ�±�
		if (node->dict[A] == nullptr)
		{
			node->dict[A] = new Trie(); //�����ڼ����±��Ӧ��ĸ����
		}
		node = node->dict[A];
	}
	node->isEnd = true; //��Ǹõ����յ�
}

bool Trie::search(string word)
{
	Trie* node = this->searchPrefix(word);
	return node != nullptr && node->isEnd; //���ؽ�㲻Ϊ�գ���Ϊ�յ�Ŵ���
}

bool Trie::startsWith(string prefix)
{
	Trie* node = this->searchPrefix(prefix);
	return node != nullptr; //��ǰ׺���ڼ���
}
