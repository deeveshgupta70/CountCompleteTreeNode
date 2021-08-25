class Solution {
public:
   
    long heightLeft(TreeNode* root){
        
        if(!root) return 0;
        
        long height = 1;
        while( root->left != NULL){
            height += 1;
            root = root->left;
        }
        
        return height;
    
    }
    
    long heightRight(TreeNode* root){
        
        if(!root) return 0;
        
         long height = 1;
        while( root->right != NULL){
            height += 1;
            root = root->right;
        }
        
        return height;
    
    }
    
    int countNodes(TreeNode* root) {
        
        if(!root) return 0;
        
        long leftD = heightLeft(root->left);
        long rightD = heightRight(root->right);
        
        if(leftD == rightD){
            return (2 << leftD) - 1;
        }
         
        return (countNodes(root->left)+countNodes(root->right) + 1);
        
    }
};
