#include <iostream>
using namespace std;

// Struktur node untuk binary tree
class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
    }
};

// Kelas BST dan traversal
class Solution {
public:
    // Fungsi untuk menyisipkan data ke dalam BST
    Node* insert(Node* root, int data) {
        if (root == NULL) {
            return new Node(data);
        }

        if (data <= root->data) {
            root->left = insert(root->left, data);
        } else {
            root->right = insert(root->right, data);
        }

        return root;
    }

    // Fungsi untuk melakukan postorder traversal
    void postOrder(Node* root) {
        if (root == NULL) return;

        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
};

// Fungsi utama
int main() {
    Solution myTree;
    Node* root = NULL;

    int n, data;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    cout << "Masukkan elemen-elemen BST:\n";
    for (int i = 0; i < n; i++) {
        cin >> data;
        root = myTree.insert(root, data);
    }

    cout << "Postorder traversal: ";
    myTree.postOrder(root);
    cout << endl;

    return 0;
}
