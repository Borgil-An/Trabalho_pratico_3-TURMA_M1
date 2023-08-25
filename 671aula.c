/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int findSecondMinimumValue( struct TreeNode* root ){
    int firstMinor = 1;
    int secondMinor;
    
    firstMinor = root->val;

    if (root->left == NULL && root->right == NULL){
        return -1;
    }

    
    if (root->left->val == firstMinor){
        secondMinor = root->right->val;
    }
    
    if (root->right->val == firstMinor){
        secondMinor = root->left->val;
    }
    
    
     
    
    if (secondMinor == firstMinor){
        return -1;
    }
    

    return secondMinor;
}
