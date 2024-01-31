#pragma once
#include"Libraries.h"
/************************************************************************/
Node::Node() : left(nullptr), right(nullptr) {}
/************************************************************************/
Node::Node(Point point) : point(point), left(nullptr), right(nullptr) {}
/************************************************************************/
Node* Node::insertNode(Node* root, Point point, unsigned depth) {
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
        if (point.latitude < root->point.latitude) {
            root->left = insertNode(root->left, point, depth + 1);
        }
        else {
            root->right = insertNode(root->right, point, depth + 1);
        }
    }

    return root;
}






