#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        data = data;
        left = NULL;
        right = NULL;
    };
} ;

int binarySearch(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}


Node* buildTreeHelper(vector<int>& preorder, vector<int>& inorder, int preStart, int preEnd, int inStart, int inEnd, unordered_map<int, int>& inorderMap) {
    if (preStart > preEnd || inStart > inEnd) {
        return NULL;
    }
    
    int rootVal = preorder[preStart];
    Node* root = new Node(rootVal);
    
    int inIndex = inorderMap[rootVal];
    int leftSubtreeSize = inIndex - inStart;
    
    root->left = buildTreeHelper(preorder, inorder, preStart + 1, preStart + leftSubtreeSize, inStart, inIndex - 1, inorderMap);
    root->right = buildTreeHelper(preorder, inorder, preStart + leftSubtreeSize + 1, preEnd, inIndex + 1, inEnd, inorderMap);
    
    return root;
}

Node* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int n = preorder.size();
    unordered_map<int, int> inorderMap;
    
    for (int i = 0; i < n; i++) {
        inorderMap[inorder[i]] = i;
    }
    
    return buildTreeHelper(preorder, inorder, 0, n - 1, 0, n - 1, inorderMap);
}




int main(){

    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
    Node* root  = new Node(4);



  return 0;
}