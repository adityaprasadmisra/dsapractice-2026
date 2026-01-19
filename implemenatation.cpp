#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int main()
{
     int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    if(n == 0) return 0;

    vector<Node *> nodes;

    int val;
    cout << "Enter root value: ";
    cin >> val;
    Node* root = new Node(val);
    nodes.push_back(root);

    for(int i = 1; i < n; i++) {
        int x, parentIdx, dir;
        cout << "Enter value: ";
        cin >> x;
        cout << "Enter parent index (0 to " << nodes.size()-1 << "): ";
        cin >> parentIdx;
        cout << "Enter 0 for left, 1 for right: ";
        cin >> dir;

        Node* newNode = new Node(x);

        if(dir == 0) {
            nodes[parentIdx]->left = newNode;
        } else {
            nodes[parentIdx]->right = newNode;
        }

        nodes.push_back(newNode);
    }

    cout << "Tree built successfully." << endl;
    return 0;

    
}