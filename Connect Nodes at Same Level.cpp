class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
        queue<Node *>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            Node *p=q.front();
            q.pop();
            if(p!=NULL)
            {
                if(!q.empty())
                {   Node *y=q.front();
                    if(y==NULL)
                        p->nextRight=NULL;
                    else
                        p->nextRight=y;
                }
                if(p->left)
                    q.push(p->left);
                if(p->right)
                    q.push(p->right);
            }
            else if(!q.empty())
                q.push(NULL);
        }
    }    
      
};
