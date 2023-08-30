#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;
    TrieNode()
    {
        isEndOfWord = false;
    }
};

class Trie {
private:
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (node -> children.find(ch) == node -> children.end()) {
                node -> children[ch] = new TrieNode();
            }
            node = node -> children[ch];
        }
        node -> isEndOfWord = true;
    }

    bool search(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            if(node -> children.find(ch) == node -> children.end()) {
                return false;
            }
            node = node -> children[ch];
        }
        return node->isEndOfWord;
    }
};

int main()
{

    Trie trie;
    trie.insert("Bangla");
    trie.insert("Bangladesh");
    trie.insert("Bangladeshi");

    cout << (trie.search("Bangla") ? "Found it" : "Doesn't found") << endl;
    cout << (trie.search("Bangladesh") ? "Yes" : "No");

    return 0;
}
