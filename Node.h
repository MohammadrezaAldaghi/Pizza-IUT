#pragma once
class Node {
private :
	Point point;
	Node* left, *right;
	friend class KD_Tree;
public:
	Node();
	Node(Point point);
	Node* insertNode(Node* root, Point point, unsigned depth);




};


