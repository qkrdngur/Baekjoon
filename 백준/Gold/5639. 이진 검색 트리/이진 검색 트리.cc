#include <iostream>
using namespace std;

struct BTreeNode
{
	int data;
	struct BTreeNode* left;
	struct BTreeNode* right;
};
BTreeNode* root = NULL;

BTreeNode* MakeBTreeNode(void)
{
	//make binary treek
	BTreeNode* nd = new BTreeNode();
	//initialize
	nd->left = NULL;
	nd->right = NULL;
	//return pointer
	return nd;
}
void InsertRecur(BTreeNode* root, BTreeNode* node);

void PreorderTraverse(BTreeNode* bt)
{

	// 구현해보자!
	if (bt == NULL) return;

	PreorderTraverse(bt->left);

	PreorderTraverse(bt->right);
	cout << bt->data << "\n";
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub) {
	// if there is a node in left link, delete it
	if (main->left != NULL) delete main->left;
	main->left = sub;
	// put sub in left link of main

}
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub) {
	// if there is a node in right link, delete it
	if (main->right != NULL) delete main->right;
	main->right = sub;
	// put sub in right link of main

}

void Insert(BTreeNode* node) {//노드 n을 이진 탐색 트리에 삽입함. 공백 트리이면 n을 루트로 하고, 그렇지 않으면 insertRecur을 호출해서 노드를 삽입
	if (root == NULL) root = node;
	else InsertRecur(root, node);
}

void InsertRecur(BTreeNode* root, BTreeNode* node)
{
	if (node->data == root->data)
		return;
	else if (node->data  < root->data) {
		if (root->left == NULL)
			MakeLeftSubTree(root, node);
		else
			InsertRecur(root->left, node);// 빈칸채우기
	}
	else {
		if (root->right == NULL)
			MakeRightSubTree(root, node);
		else
			InsertRecur(root->right, node);// 빈칸채우기
	}
}

void SetData(BTreeNode* bt, int data) {
	bt->data = data;
}

int main()
{
	int value;
	while (cin >> value)
	{
		BTreeNode* bt1 = MakeBTreeNode();
		SetData(bt1, value);
		Insert(bt1);
	}

	PreorderTraverse(root);
}