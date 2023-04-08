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
    void dfs(Node* curr,Node* node,vector<Node *>& visited){
        visited[node->val]=node;
        for(auto el:curr->neighbors){
            if(visited[el->val]==NULL){
                Node *newnode=new Node(el->val);
                (node->neighbors).push_back(newnode);
                dfs(el,newnode,visited);
            }
            else
              (node->neighbors).push_back(visited[el->val]);
        }
    }
public:
    Node* cloneGraph(Node* node) {
       if(node==NULL)
         return NULL;
         vector<Node*> visited(1000,NULL);
         Node* copy=new Node(node->val);
         visited[node->val]=copy;
         for(auto cr:node->neighbors){
             if(visited[cr->val]==NULL){
                 Node *newnode=new Node(cr->val);
                 (copy->neighbors).push_back(newnode);
                 dfs(cr,newnode,visited);
             }
             else
                (copy->neighbors).push_back(visited[cr->val]);
         } 
         return copy;
    }
};