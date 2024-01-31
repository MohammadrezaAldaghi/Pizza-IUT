#include"Libraries.h"

class KD_Tree
{
private:
	Node* root;



public:
	KD_Tree() {};
    /*Node* insertNode(Node* root, Point point, unsigned depth) {
        if (root == nullptr) {
            return new Node(point);
        }

        unsigned cd = depth % 2;

        if (cd == 0) {
            if (point.longitude < root->point.longitude) {
                root->left = insertNode(root->left, point, depth + 1);
            }
            else {
                root->right = insertNode(root->right, point, depth + 1);
            }
        }
        else {
            if (point.y < root->point.y) {
                root->left = insertNode(root->left, point, depth + 1);
            }
            else {
                root->right = insertNode(root->right, point, depth + 1);
            }
        }

        return root;
    }*/

    Node* insertNode(Node* root, Point point, unsigned depth) {};

	void insert(Point point) {
		root = insertNode(root, point, 0);
		
	}



};




