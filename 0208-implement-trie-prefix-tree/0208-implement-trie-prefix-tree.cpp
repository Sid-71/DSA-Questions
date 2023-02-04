class Trie {
public:
    Trie*next[26];
    bool isEnd;
    Trie() {
     for(int i=0; i<26; i++)
     {
         next[i] = NULL;
     }
        isEnd = false;
    }
    
    void insert(string word) {
        Trie*curr = this;
        for(int i=0; i<word.size(); i++)
        {
            int mapp = word[i]-'a';
            if(curr->next[mapp] == NULL)
            {
                curr->next[mapp] = new Trie();
            }
           curr = curr->next[mapp];
        }
        curr->isEnd = true;
    }
    
    bool search(string word) {
        Trie*cur = this;
        for(int i=0; i<word.size(); i++)
        {
            int mapp = word[i]-'a';
            if(cur->next[mapp] == NULL)return false;
            cur = cur->next[mapp];
        }
        return cur->isEnd;
        
    }
    
    bool startsWith(string word) {
         Trie*cur = this;
        for(int i=0; i<word.size(); i++)
        {
            int mapp = word[i]-'a';
            if(cur->next[mapp] == NULL)return false;
            cur = cur->next[mapp];
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