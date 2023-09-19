#include "../include/BPlusTree.h"
#include "../src/BPlusTreeStruct.cpp"
#include "../src/Delete.cpp"
#include "../src/Insert.cpp"

using namespace std;

int main(void) 
{
    auto *tree = new BPlusTree<int, uint64_t>();
    tree->tree_insert(1, static_cast<uint64_t>(1));
    tree->show_bplustree();
}
