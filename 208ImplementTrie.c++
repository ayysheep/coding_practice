#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct TrieNode{
    bool isEnd;
    TrieNode* children[26];
    TrieNode():isEnd(false){
    memset(children, 0, sizeof(children));
    }
};
class Trie {
private:
    TrieNode* root;
public:
    Trie(){
        root = new TrieNode();
    }
    void insert(string word) {
        TrieNode* node = root;
        for(char s:word){
            int index=s-'a';
            
            if(!node->children[index]){
                node->children[index]= new TrieNode();
            }
            node=node->children[index];
                
        }
        node->isEnd=true;
    }
    
    bool search(string word) {
        TrieNode* node = root;
        for(char s:word){
            int index=s-'a';
            
            if(!node->children[index]){
                return false;
            }
            node=node->children[index];
                
        }
        return node&&node->isEnd;
        
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(char s:prefix){
            int index=s-'a';
            
            if(!node->children[index]){
                return false;
            }
            node=node->children[index];
                
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */