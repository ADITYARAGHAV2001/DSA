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
  public:
  TrieNode* root;
   Trie(){
     root = new TrieNode('\0');
   }
   void insertUtil(TrieNode* root, string word){
          // base case
      if(word.length()==0){
        root->isTerminal = true;
        return;
      }
     int index = word[0] - 'a';
     TrieNode* child;
    //  present
     if( root->children[index]!=NULL ){
      child = root->children[index];
     }
     else{
      child = new TrieNode(word[0]);
      root->children[index] = child;
     }
    //  recursion
     insertUtil(child, word.substr(1));
   }
   void insertWord(string word){
    insertUtil(root, word);
   }

   bool searchUtil(TrieNode* root, string word){
    // base case
    if(word.length() == 0 ){
      return root->isTerminal;
    }
    int index = word[0] - 'a';
    TrieNode* child;
    // is present
    if(root-> children[index]!=NULL){
      child = root->children[index];
    }
    else{
      return false;
    }
    return searchUtil(child, word.substr(1));
  }

  bool searchWord(string word){
    return searchUtil(root, word);
   }
  void removeUtil(TrieNode* root, string word){
    if(word.length()==0){
      if(root->isTerminal == true){
           root->isTerminal == false;
           return;
      }
      else{
        cout<<"the word is not present in the trie"<<endl;
      }
    }
      int index = word[0] - 'a';
    TrieNode* child;
    // is present
    if(root-> children[index]!=NULL){
      child = root->children[index];
    }
  }
  void removeWord(string word){
    removeUtil(root, word);
  }
};
int main(){
Trie *t = new Trie();
t->insertWord("arm");
t->insertWord("do");
t->insertWord("time");
t->insertWord("car");
t->insertWord("abs");
cout<<t->searchWord("time")<<endl;
cout<<t->searchWord("tim")<<endl;
return 0;
}