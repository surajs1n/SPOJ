#include<bits/stdc++.h>

struct trie {
    int flag;
    trie *next[10];

    trie() {
        flag = 0;

        for(int i=0;    i<10;   i++) {
            next[i] = NULL;
        }
    }
}*root = NULL;

int global = 0;

void insertInto(trie **create, char *str,int index,int lenght) {

    if(*create == NULL) {
        *create = new trie;
    }

    if(index == lenght - 1) {
        (*create)->flag = 1;
        return;
    }

    insertInto(&(*create)->next[str[index + 1] - '0'],str,index+1,lenght);
}

void showTrie(trie **temp,int count) {

    if(*temp == NULL) {
        return;
    }

    if((*temp)->flag) {
        count++;
    }

    for(int i=0;    i<10;   i++) {
        showTrie(&(*temp)->next[i],count);
    }

    delete *temp;

    if(count > 1) {
        global = 1;
    }
}

int main() {

    char phoneNo[15];   int t,n;

    scanf("%i",&t);
    while(t--) {

        scanf("%i",&n);
        global = 0;

        while(n--) {
            scanf("%s",phoneNo);

            if(global == 0) {
                insertInto(&root,phoneNo,-1,strlen(phoneNo));
            }
        }

        showTrie(&root,0);

        if(global) {
            printf("NO\n");
        }

        else {
            printf("YES\n");
        }

        root = NULL;
    }
    return 0;
}
