#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val){
    data = val;
    left = nullptr;
    right = nullptr;
}
    int getheight(Node *node){
    if(node == nullptr){
        return 0;
    }
    // getheight(node->left) + 1;
    // getheight(node->right) + 1;

    return max(getheight(node->left) + 1, getheight(node->right) + 1);

};
};

int main(){

    Node node1 = Node(1);
    Node node2 = Node(2);
    node1.left = &node2;

    Node node3 = Node(3);
    node1.right = &node3;

    Node node4 = Node(4);
    node3.right = &node4;

    cout << node1.getheight(&node1) << endl;

    return 0;
}