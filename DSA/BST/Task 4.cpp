#include<iostream>
using namespace std;

class Node {
public:
    Node* left, * right;
    int data;

    Node(int d = 0) : data(d), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* root;

    Node* insert(Node* root, int d) {
        if (root == nullptr) {
            return new Node(d);
        }
        if (root->data == d) {
            return root;
        }
        if (d < root->data) {
            root->left = insert(root->left, d);
        }
        else {
            root->right = insert(root->right, d);
        }
        return root;
    }

    bool search(Node* root, int d) {
        if (root == nullptr) {
            return false;
        }
        if (root->data == d) {
            return true;
        }
        if (d < root->data) {
            return search(root->left, d);
        }
        else {
            return search(root->right, d);
        }
    }

    void preOrder(Node* root) {
        if (root == nullptr) {
            return;
        }
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

    void inOrder(Node* root) {
        if (root == nullptr) {
            return;
        }

        preOrder(root->left);
        cout << root->data << " ";
        preOrder(root->right);
    }

    void postOrder(Node* root) {
        if (root == nullptr) {
            return;
        }
        preOrder(root->left);
        preOrder(root->right);
        cout << root->data << " ";
    }

    int height(Node* root) {
        if (root == nullptr) {
            return 0;
        }
        int lh = height(root->left);
        int rh = height(root->right);

        return lh > rh ? lh+1 : rh+1;
    }

    int leafNo(Node* root) {
        if (root == nullptr) {
            return 0;
        }

        if (root->left == nullptr && root->right == nullptr) {
            return 1;
        }

        return leafNo(root->left) + leafNo(root->right);
    }

public:
    BST() : root(nullptr) {}

    void insert(int d) {
        root = insert(root, d);
    }

    bool search(int d) {
        return search(root, d);
    }

    void preOrder() {
        preOrder(root);
        cout << endl;
    }
    void inOrder() {
        inOrder(root);
        cout << endl;
    }
    void postOrder() {
        postOrder(root);
        cout << endl;
    }

    int height() {
        return height(root);
    }

    int leafNo() {
        return leafNo(root);
    }
};

int main() {
    BST tree;

    // Insert values into BST
    tree.insert(60);
    tree.insert(50);
    tree.insert(70);
    tree.insert(30);
    tree.insert(53);
    tree.insert(80);
    tree.insert(35);
    tree.insert(57);
    tree.insert(75);
    tree.insert(32);
    tree.insert(40);
    tree.insert(77);
    tree.insert(48);
    tree.insert(45);
    
    tree.preOrder();
    cout << "Height of BST is: " << tree.height() << endl;
    cout << "Number of Leaves in BST tree are: " << tree.leafNo();

    return 0;
}
