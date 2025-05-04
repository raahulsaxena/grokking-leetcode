class Solution {

    public:
    
        Node* cloneGraph(Node* node) {
            
            map<Node*, Node*> clonedMap;
    
            Node* node_copy = new Node(node->val);
            
            
            queue<Node*> q;
            
            q.push(node);
            
            clonedMap[node] = node_copy;
            
            while(!q.empty()){
                
                Node* curr_node = q.front();
                
                q.pop();
    
                for(Node* i: curr_node->neighbors){
                    
                    if(clonedMap.find(i) == clonedMap.end()) {
                        
                        q.push(i);
                        
                        clonedMap[i] = new Node(i->val);
                        
                    }
                    
                    clonedMap[curr_node]->neighbors.push_back(clonedMap[i]);
                    
                }
                    
            }
            
            return node_copy;
            
        }
    };