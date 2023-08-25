/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int firstMinor = -1;
int secondMinor = -1;

void traverseTree(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    if (root->val < firstMinor || firstMinor == -1) {
        secondMinor = firstMinor;
        firstMinor = root->val;
    } else if ((root->val < secondMinor || secondMinor == -1) && root->val != firstMinor) {
        secondMinor = root->val;
    }

    traverseTree(root->left);
    traverseTree(root->right);
}

int findSecondMinimumValue(struct TreeNode* root) {
    if (root == NULL) {
        return -1;
    }

    firstMinor = root->val;
    secondMinor = -1;

    traverseTree(root);

    return secondMinor;
}
