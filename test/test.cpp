#include "../include/BPlusTree.h"
#include "../src/BPlusTreeStruct.cpp"
#include "../src/Delete.cpp"
#include "../src/Insert.cpp"

using namespace std;

int main(void) 
{
    auto *tree = new BPlusTree<int, uint64_t>();
    tree->tree_insert(1, static_cast<uint64_t>(1));
    tree->tree_insert(2, static_cast<uint64_t>(2));
    tree->tree_insert(3, static_cast<uint64_t>(3));
    tree->tree_insert(4, static_cast<uint64_t>(4));
    tree->tree_insert(5, static_cast<uint64_t>(5));
    tree->tree_insert(11, static_cast<uint64_t>(1));
    tree->tree_insert(21, static_cast<uint64_t>(2));
    tree->tree_insert(31, static_cast<uint64_t>(3));
    tree->tree_insert(41, static_cast<uint64_t>(4));
    tree->tree_insert(51, static_cast<uint64_t>(5));
    tree->show_bplustree();
}
