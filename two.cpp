int getMaxWidth(Node* root)
{
queue<Node*>q;
        if(root==NULL) return 0;
        q.push(root);
        int count=0,res=0;
        while(q.empty()!=true)
        {   
            count=q.size();
            res=max(res,count);
            int n=q.size();
            for(int i=0;i<n;i++)
            {   Node* t=q.front();q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return res;
}