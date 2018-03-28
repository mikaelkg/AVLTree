/* Copyright 2018 Khachatryan M. G., Chepic P. I.*/
#include <iostream>
#include <vector>
#include <cstdlib>
namespace BSTTree {
struct Node {
    int depth = 0;
    int data;
    Node* left;
    Node* right;
    explicit Node(int value);
};
Node* insert_Node(Node* root, int value);
unsigned depth(Node* root);
void setdepth(Node* root);
class Tree {
 public:
    int choice;
    Node* root = 0;
    explicit Tree(std::vector <int> nodes);
    void create_tree(std::vector <int> nodes);
    void output_tree(Node* root);
};

class TUI {
 public:
    static int choose_operation();
    static std::vector <int> preprocessing(std::vector <int> nodes);
    static bool check_nodes(std::vector <int> nodes);
};
}  // namespace BSTTree

