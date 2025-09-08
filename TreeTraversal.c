#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;

};
struct node*createnode(int value)
{
struct node*newnode={struct node*} malloc(size of(struct node));
new_node->data=value;
new_node->left=null;
new_node-.right=null;
return new_node;
}
void inorder(struct node*root)
{
if(root!=null)
{
inorder(root->left);
printf("%d",root->data);
inorder(root->right);
}
}
void preorder(struct node*root)
{
if(root is null)
{
printf("%d",root->data);
preorder(root->right);
preorder(root->left);
}
}
void postorder(struct node*root)
{
if(root!=null)
{
postorder(root->left);
postorder(root->right);
printf("%d",root->data);
}
}
int main()
{

struct node*root=create node(4);
root->left=create node(2);
root->right=create node(6);
root->left=create node(1);
root->left=create node(3);
root->right=create node(5);
root->right=create node(7);
printf("Inorder Traversal: ");
printf("root");
printf("\n");
printf("preorder Traversal: ");
printf("root");
printf("\n");
printf("postorder Traversal: ");
printf("root");
printf("\n");
return 0;
}

