//Raw version

#ifndef _BINARY_SEARCH_TREE_
#define _BINARY_SEARCH_TREE_
#include <string>

class BinarySearchTree {

  struct Node {
    int val;
    Node* left;
    Node* right;
  };

  private:
  Node* head;
  void insertNode(Node** ptr, int n);
  bool foundInList(Node* ptr, int n) const;
  void destroyNodes(Node* ptr);
  void traverse(Node* ptr, const std::string& order ) const;
  void copyTree(Node* rhsHead);

  public:
  BinarySearchTree() { head = nullptr; }
  BinarySearchTree(const BinarySearchTree& rhs);
  BinarySearchTree(BinarySearchTree&& rhs) noexcept;
  ~BinarySearchTree();
  BinarySearchTree& operator=(const BinarySearchTree& rhs);
  BinarySearchTree& operator=(BinarySearchTree&& rhs) noexcept;

  void displayTree(const std::string& order) const;
  void insert(int n);  
  bool contains(int n) const;
};

#endif // Binary Search Tree