:
<|im_end|>
<|im_start|>assistant
```cpp
#include <iostream>

enum class TreeType { Leaf, Node };

struct Tree {
    TreeType type;
    union {
        struct {
            int value;
        } leaf;
        struct {
            Tree* left;
            int value;
            Tree* right;
        } node;
    };

    Tree(int value) : type(TreeType::Leaf), leaf{value} {}
    Tree(Tree* left, int value, Tree* right) : type(TreeType::Node), node{left, value, right} {}

    ~Tree() {
        if (type == TreeType::Node) {
            delete node.left;
            delete node.right;
        }
    }

    static Tree* createLeaf(int value) {
        return new Tree(value);
    }

    static Tree* createNode(Tree* left, int value, Tree* right) {
        return new Tree(left, value, right);
    }
};

int sumTree(Tree* tree) {
    if (tree->type == TreeType::Leaf) {
        return tree->leaf.value;
    } else {
        return sumTree(tree->node.left) + tree->node.value + sumTree(tree->node.right);
    }
}

int main() {
    Tree* t1 = Tree::createNode(
        Tree::createLeaf(1),
        2,
        Tree::createLeaf(3)
    );

    Tree* t2 = Tree::createNode(
        Tree::createNode(
            Tree::createLeaf(1),
            2,
            Tree::createLeaf(3)
        ),
        4,
        Tree::createNode(
            Tree::createLeaf(5),
            6,
            Tree::createNode(
                Tree::createLeaf(7),
                8,
                Tree::createLeaf(9)
            )
        )
    );

    std::cout << sumTree(t1) << std::endl;
    std::cout << sumTree(t2) << std::endl;

    delete t1;
    delete t2;

    return 0;
}
```<|im_end|>