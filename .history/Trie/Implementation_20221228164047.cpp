#include<iostream>
using namespace std;
class TrieNode{
    public:
      char data;
      TrieNode *children[26];
      bool isTerminal;
      TrieNode(char ch){
          data = ch;
          for (int  i = 0; i < 26; i++)
          {
            children[i] = NULL;
          }
         isTerminal = false; 
      }
};
class Trie{
   TrieNode* root;
   void insertUtil(TrieNode* root, string word){
      // base case
      if(word.length()==0){
        root->isTerminal = true;
      }
     int index = word[0] - 'a';
     TrieNode* child;
    //  present
     if( root->children[index]!=NULL ){
      child = root->children[index];
     }
     else{
      
     }
   }
   void insertWord(string word){
         insertUtil(root, word);
   }
};
int main(){

return 0;
}