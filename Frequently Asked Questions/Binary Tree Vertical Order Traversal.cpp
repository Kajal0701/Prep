vector<vector<int>> verticalOrder(TreeNode* root) {
    if(!root){
        return {};
    }
    queue<pair<TreeNode*, int>>q;
    q.push({root,0});
    
    map<int, vector<int>>mp;
    while(!q.empty())
    {
        auto node = q.front().first; int level = q.front().second;
        q.pop();
        mp[level].push_back(node->val);
        if(node->left)
        {
            q.push({node->left, level-1});
        }
        if(node->right)
        {
            q.push({node->right, level+1});
        }
    }
    vector<vector<int>>ans;
    for(auto it: mp)
    {
        ans.push_back(it.second);
    }
    return ans;
    
}