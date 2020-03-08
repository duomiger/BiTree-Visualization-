#include "acllib.h"
#include "tree.h"
#include "stdio.h"
#include "stdlib.h"

void rightarrow(int x, int y)
 {
	beginPaint();
	line(x,y,x+20,y+20);
	line(x+20,y+20,x+15,y+10);
	line(x+20,y+20,x+10,y+15);
	endPaint(); 	
 }
 void leftarrow(int x, int y)
 {
	beginPaint();
	line(x,y,x-20,y+20);
	line(x-20,y+20,x-15,y+10);
	line(x-20,y+20,x-10,y+15);
	endPaint(); 	
 }
 
void insect(int key, treePtr bt)  
{
	printf("the value of root is %p\n",bt);
	treePtr parent;   //��ʾ˫�׽�㣻
	treePtr head = bt;
	treePtr p=(treePtr)malloc(sizeof(treeNode));
	printf("the value of p is %p\n",p);
	p->data=key;   //���������ݣ�
	p->Lc=p->Rc=NULL;  //���������ÿգ�
	
	//������Ҫ��ӵĸ���㣬���������Ƕ�Ϊ0�Ľ�㣻
	while(head) 
	{
		parent=head;
		if(key<head->data)   //���ؼ���С�ڽ������ݣ�
			head=head->Lc; //���������ϲ��ң� 
		else   //���ؼ��ִ��ڽ������ݣ�
			head=head->Rc;  //���������ϲ��ң�
	}
	//�ж���ӵ�������������������
	if(key<parent->data)   //С�ڸ���㣻
		parent->Lc=p;    //��ӵ���������
	else    //���ڸ���㣻
		parent->Rc=p;   //��ӵ���������
	printf("the value of parent is %p\n",parent);
	printf("the value of parent->Lc is %p\n",parent->Lc);
	printf("the value of root->Rc is %p\n",bt->Rc);
	printf("the value of root->Lc is %p\n",bt->Lc);
	printf("\n");
		printf("\n");
		printf("\n");
}

void allinsert(int num,  treePtr root)
{
	int Data,i=0;
	if(num==0)
	{
		printf("the number of nodes can not be zero") ;
		return;
	}
	root->Lc = NULL; root->Rc = NULL; root->data = 0;
	printf("input the number of the nodes\n");
	scanf("%d",&num);
	printf("input the data of the nodes\n");
	scanf("%d",&Data);
	root->data = Data;
	while(i<num-1)
	{
		printf("input the data of the nodes\n");
		scanf("%d",&Data);
		insect(Data,root);
		i++; 
	}
}
 
void printLeftChild(treePtr point,int x, int y)/*x,y��treeptr����ڵ��Բ�ĵ�λ��*/ 
{
	if(point->Lc == NULL) return;
	leftarrow(x-9,y+12);
	node(x-38,y+34,point->Lc->data);
}

void printRightChild(treePtr point,int x, int y)/*x,y��treeptr����ڵ��Բ�ĵ�λ��*/ 
{
	if(point->Rc == NULL) return;
	rightarrow(x+9,y+12);
	node(x+38,y+34,point->Rc->data);
}

void paintTree1(treePtr root, treePtr Node, int x, int y)
{
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Let's paint!'\n");
	printf("the value of Node is %p\n",Node);
	printf("the value of root is %p\n",root);
	if(Node==NULL) return;
	if(Node==root) node(x,y,Node->data);
	printf("the value of Node->Lc is %p\n",Node->Lc);
	if(Node->Lc)
	{
		printLeftChild(Node,x,y);
		printf("the value of Node->Lc is %p, and the value of Node is %p, it's already painted'\n",Node->Lc,Node->Rc);
		paintTree1(root,Node->Lc,x-38,y+34);
	}
	printf("the value of Node->Rc is %p\n",Node->Rc);
	if(Node->Rc)
	{
		printRightChild(Node,x,y);
		printf("the value of Node->Rc is %p, and the value of Node is %p, it's already painted'\n",Node->Rc,Node->Rc);
		paintTree1(root,Node->Rc,x+38,y+34);
	}
	
}

void node(int x, int y, int data)
 {
 	beginPaint();
	arc(x-15,y-15,x+15,y+15,x,y,x,y);
	setTextSize(10);
	char str[3];
	itoa(data,str,10);
	paintText(x-7,y-7,str);
	endPaint();
 }
 
 void paintTree(treePtr Node, int x, int y)
{
	paintTree1(Node,Node,x,y);	
}

void init(int x, int y)
{
	initWindow("Tree",100,100,x,y);
	initConsole();
}

