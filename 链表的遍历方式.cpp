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
   
   //添加节点 
   Node *u = new Node(4);
   u ->next = p;     // u ->next = q;——就把p跳过了，即删除了p; 
   head = u;
   
   //删除节点
   head->next = head ->next ->next; 
   
   //链表的遍历方式 
   for(Node* i = head;i != NULL;i = i ->next)
   cout<<i ->val<<endl;
   cout<<p<<endl;
   return 0;
}

//链表的删除是指在遍历的时候遍历不到这个点 
