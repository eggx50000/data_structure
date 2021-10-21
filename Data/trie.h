#pragma once

struct node{
    node *child[26];
    bool en, ch;
    node(){
        for(int i = 0; i < 26; i ++) child[i] = nullptr;
        en = false;
        en = en;
    }
    ~node(){
        for(int i = 0; i < 26; i ++){
            if(child[i] != nullptr) delete child[i];
        }
    }
    void ins(char *st){
        if(*st == 0){
            en = true;
            return;
        }
        ch = true;
        if(child[*st - 'a'] != nullptr) child[*st - 'a'] -> ins(st + 1);
        else{
            child[*st - 'a'] = new node;
            child[*st - 'a'] -> ins(st + 1);
        }
    }

};