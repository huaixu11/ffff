#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct Node
{
	int val;
	Node *next;
	
	Node(int _val) : val(_val),next(NULL){}
};

int main()
{
   int i;
   Node* p = new Node(1);
   Node* q = new Node(2);
   Node* o = new Node(3);
   p ->next = q;
   q ->next = o;
   
   Node *head = p;
   
   //��ӽڵ� 
   Node *u = new Node(4);
   u ->next = p;     // u ->next = q;�����Ͱ�p�����ˣ���ɾ����p; 
   head = u;
   
   //ɾ���ڵ�
   head->next = head ->next ->next; 
   
   //����ı�����ʽ 
   for(Node* i = head;i != NULL;i = i ->next)
   cout<<i ->val<<endl;
   cout<<p<<endl;
   return 0;
}

//�����ɾ����ָ�ڱ�����ʱ�������������� 
