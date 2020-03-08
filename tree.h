typedef struct treeNode{
    int data;
    int height;
    struct treeNode* Lc;
    struct treeNode* Rc;
}treeNode,*treePtr;

void rightarrow(int x, int y); 
void leftarrow(int x, int y);
void node(int x, int y, int data);
void printLeftChild(treePtr point,int x, int y);/*x,y是treeptr这个节点的圆心的位置*/ 
void paintTree1(treePtr root, treePtr Node, int x, int y);
void printRightChild(treePtr point,int x, int y);/*x,y是treeptr这个节点的圆心的位置*/ 
void insect(int key, treePtr bt);
void paintTree(treePtr root, int x, int y);
void allinsert(int num,  treePtr root);
void init(int x, int y);
