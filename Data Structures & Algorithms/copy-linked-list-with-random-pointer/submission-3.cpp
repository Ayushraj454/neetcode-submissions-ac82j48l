/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        map<Node*,Node*> oldTocopy ;
        oldTocopy[NULL] = NULL ;

        Node*curr = head ;

        while(curr != NULL)
        {
            Node*copy = new Node(curr -> val);
            oldTocopy[curr] = copy ;
            curr = curr -> next ;
        }

        curr = head ;
        while(curr != NULL)
        {
            Node*copy = oldTocopy[curr];
            copy -> next = oldTocopy[curr -> next];
            copy -> random = oldTocopy[curr -> random];
            curr = curr -> next ;
        }

        return oldTocopy[head];
    }
};
