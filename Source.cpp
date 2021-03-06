#include <vector>
#include <iostream>
using namespace std;
struct Node {

	int data;
	struct Node* left;
	struct Node* right;


	// val is the key or the value that
	// had to be added to the data part
	Node(int val)
	{
		data = val;

		//left and right child for node
		//will be initialized to null
		left = NULL;
		right = NULL;

	}
};

int main()
{
	/*create root*/
	struct Node* root = new Node(1);
	/* following is the tree after above statement

				1
			   / \
			NULL  NULL

	*/

	root->left = new Node(2);
	root->right = new Node(3);
	/* 2 and 4 become left and right children for 1
				  1
				  /    \
				 2       3
			   /  \     /  \
			NULL NULL  NULL NULL
	*/

	root->left->left = new Node(4);
	/* 4 becomes left child of 2
		 1
			/     \
		   2       3
		  / \     / \
		 4  NULL NULL NULL
		/ \
	 NULL NULL
	*/
	
	return 0;
}

/*
Tree is a hierarchical data structure. Main uses of trees include maintaining hierarchical data, 
providing moderate access and insert/delete operations. Binary trees are special cases of tree
where every node has at most two children. 
*/