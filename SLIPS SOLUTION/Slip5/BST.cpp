

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct BSTnode
{
	 int data;
	 struct BSTnode *left,*right;
}BSTnode;

BSTnode *find(BSTnode *,int);
BSTnode *insert(BSTnode *,int);
BSTnode *delet(BSTnode *T,int x);
BSTnode *create();
void inorder(BSTnode *T);
void preorder(BSTnode *T);
void postorder(BSTnode *T);
int count(BSTnode *T);
void main()
  {
	BSTnode *root=NULL,*p;
	int x,op;
	clrscr();
	do
	  {
	    printf("\n\n1)Create\n2)Insert\n3)Search\n4)Preorder(recursive)");
	    printf("\n5)Inorder(recursive)\n6)Posorder(Recursive)");
	    printf("\n7)Delete\n8)Quit");
	    printf("\nEnter Your Choice :");
	    scanf("%d",&op);
	     switch(op)
	      {
			case 1: root=create();break;
			case 2:	printf("\nEnter the key to be inserted :");
					scanf("%d",&x);
					root=insert(root,x);
					break;
			case 3:	printf("\nEnter the key to be searched :");
					scanf("%d",&x);
					p=find(root,x);
					if(p==NULL)
					  printf("\n ***** Not Found****");
					else
					  printf("\n ***** Found*****");
					break;
		    case 4: preorder(root);break;
			case 5: inorder(root);break;
			case 6: postorder(root);break;
			case 7:	printf("\nEnter the key to be deleted :");
					scanf("%d",&x);
					root=delet(root,x);
					break;
			case 8:count(T);
				   break;
	     }
	 }while(op!=9);
}
void inorder(BSTnode *T)
{
	if(T!=NULL)
	{
		inorder(T->left);
		printf("%d\t",T->data);
		inorder(T->right);
	}
}

void preorder(BSTnode *T)
 {     	
      if(T!=NULL)
	  { 
	       printf("%d\t",T->data);
	       preorder(T->left);
	    preorder(T->right);
	  }
 }
void postorder(BSTnode *T)
 {    
 	 if(T!=NULL)
	  {
	    postorder(T->left);
	    postorder(T->right);
	    printf("%d\t",T->data);
	  }
 }
BSTnode *find(BSTnode *root,int x)
{
	while(root!=NULL)
	{
		if(x==root->data)
			return(root);
		if(x>root->data)
			root=root->right;
		else
		root=root->left;
	}
	return(NULL);
}

BSTnode *insert(BSTnode *T,int x)
{
	BSTnode *r;
	// acquire memory for the new node
	if(T==NULL)
	  {
		r=(BSTnode*)malloc(sizeof(BSTnode));
		r->data=x;
		r->left=NULL;
		r->right=NULL;
		return(r);
	  }


	if(x>T->data)
	  {
		T->right=insert(T->right,x);
		return(T);
	  }
	else
		if(x<T->data)
		  {
			T->left=insert(T->left,x);
			return(T);
		  }
		else //duplicate data
			return(T);
 }
BSTnode *create()
{
	int n,x,i;
	BSTnode *root;
	root=NULL;
	printf("\nEnter no. of nodes :");
	scanf("%d",&n);
	printf("\nEnter tree values :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		root=insert(root,x);
	}
	return(root);
}

int count(BSTnode *T)
{
   int i;

   if(T==NULL)
    {
       return 0;
    }
   elseif(T->left==NULL && T->right==NULL)
       return 1;
   i=count(T->left)+count(T->right);
	return(i);

}

BSTnode *delet(BSTnode *T,int x)
{
	BSTnode *temp;
	if(T==NULL)
	{
		printf("\nElement not found :");
		return(T);
	}
	if(x < T->data)                // delete in left subtree
	{
		T->left=delet(T->left,x);
		return(T);
	}
	if(x > T->data)                // delete in right subtree
	{
		T->right=delet(T->right,x);
		return(T);
	}
	// element is found
	if(T->left==NULL && T->right==NULL)   // a leaf node
	{
		temp=T;
		free(temp);
		return(NULL);
	}
	if(T->left==NULL)
	{
		temp=T;
		T=T->right;
		free(temp);
		return(T);
	}
	if(T->right==NULL)
	{
		temp=T;
		T=T->left;
		free(temp);
		return(T);
	}
	// node with two children
	//go to the inorder successor of the node
	temp=T->right;
	while(temp->left !=NULL)
	  temp=temp->left;
	T->data=temp->data;
	T->right=delet(T->right,temp->data);
	return(T);
}

