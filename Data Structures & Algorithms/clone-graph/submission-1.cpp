/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {

private :
Node* dfs(Node* node, map<Node *, Node *> &mappingsOldToNew){
    if(node ==nullptr) return nullptr;
    if (mappingsOldToNew.count(node)) {
            return mappingsOldToNew[node];
        }
        Node* copy = new Node(node->val);
mappingsOldToNew [node] = copy;

for(Node * nbr: node -> neighbors){
    copy->neighbors.push_back(dfs(nbr, mappingsOldToNew));
}
return copy;

}

public:
    Node* cloneGraph(Node* node) {

        map<Node *, Node *> mappingsOldToNew;
        return dfs(node, mappingsOldToNew);
    }
};
