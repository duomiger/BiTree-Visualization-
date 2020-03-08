# BiTree-Visualization-
这个项目很简单当你被二叉树绕晕的时候,你肯定希望把这棵树画在某个窗口里面。当你下载了这个项目后你会看见五个文件
main.c tree.c tree.h acllib.h acllib.c 你可以不用管后面四个文件。你的所有操作都只需要进行在main里面。
在main.c 里面你可以看见一个Setup（ ）函数，将它视为main函数。你的一切操作都必须在这个函数中进行，就像一般项目的主函数一样。
这个项目提供了三个可用函数：

init（int x, int y）
xy 分别是你希望二叉树所显示的窗口的长度和宽度

paintTree（treePtr root，int x，int y）
root是你的根节点指针；x，y是你希望根节点出现在屏幕上的位置。

allinsert（int num, treePtr root）
num是整棵树的节点数量，root是树的根节点。

你可以看出，根节点十分重要，所以在你使用一切函数之前，都请先申请一个根节点
	treePtr root=(treePtr)malloc(sizeof(treeNode));

注意：你需要把整棵树按照我的标准来设置：

typedef struct treeNode{
    int data;
    struct treeNode* Lc;
    struct treeNode* Rc;
}treeNode,*treePtr;

这个结构已经被我设置好了，在tree.h文件里面，你可以更改。你也可以在结构体中增添别的元素，但是data Lc Rc是必须的。

感谢翁恺老师和浙大所有的计算机系的老师~使他们编写了acllib.h并教会了我这些可爱的知识~

It's a very simple project and when you get confused by a binary tree, you want to draw that tree in some window.When you download the project you will see five files
main. c tree. c tree.h acllib.h acllib.c 
you can ignore the first four files.All you operation can be in main.c
Inside main.c you can see a Setup () function, which is treated as main function in other project.Everything you do must be done in this function, just like the main function of an ordinary project.

This project provides three available functions:

Init (int x, int y)
x,y are the length and width of the window that you want the binary tree to display

paintTree (treePtr root, int x, int y)
Root is your root node pointer;x, y is where you want the root node to appear on the window.

allinsert (int num, treePtr root)
Num is the number of nodes in the tree, and root is the root node of the tree.

As you can see, the root node is very important, so please apply for a root node before you use any function
treePtr root = (treePtr) malloc (sizeof (treeNode));

Note: you need to set the tree on base of my struct:
Typedef struct treeNode {
The int data;
Struct treeNode * Lc;
Struct treeNode * Rc;
} treeNode, * treePtr;

This structure has been set by me, in the tree.h file, in which you can change it.You can also add other elements to the structure, but data Lc Rc is required.

Thanks to Prof. kai Weng and all the teachers in the computer department of Zhejiang University ~ they wrote acllib.h and taught me these lovely knowledge ~
