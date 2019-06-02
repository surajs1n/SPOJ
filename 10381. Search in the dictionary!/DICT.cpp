#include<stdio.h>
#include<string.h>
#define MAX 26

struct trie {
    int flag;
    trie *next[MAX];

    trie() {
        int i;
        flag = 0;
        for(i=0;    i<MAX;  i++) {
            next[i] = NULL;
        }
    }
}*root = NULL;

void createTrie(trie **root,char *str,int index,int lenght) {

    if(*root == NULL) {
        *root = new trie;
    }

    if(index == lenght - 1) {
        (*root)->flag = 1;
        return;
    }

    createTrie(&(*root)->next[str[index + 1] - 'a'],str,index + 1, lenght);
}

void print(trie *root,char *str,char *temp,int index,int ch) {

    temp[index] = ch + 'a';
    temp[index + 1] = 0;

    if(root->flag) {
        printf("%s%s\n",str,temp);
    }

    for(int i=0;    i<MAX;     i++) {
        if(root->next[i]) {
            print(root->next[i],str,temp,index+1,i);
        }
    }
}

int check(trie *root, char *str, int index,int lenght) {

    if(root == NULL) {
        return 0;
    }

    if(index == lenght - 1) {

        int i = 0;

        for(i=0;    i<MAX;  i++) {
            if(root->next[i] == NULL)
                break;
        }

        if(i >= MAX) {
            return 0;
        }

        char temp[20];

        for(i=0;    i<MAX;     i++) {
            if(root->next[i]) {
                print(root->next[i],str,temp,0,i);
            }
        }

        return 1;
    }

    return check(root->next[str[index + 1] - 'a'] , str, index + 1,lenght);
}

int main() {

    int t,n,i;  char str[25];

    scanf("%i",&t);

    while(t--) {
        scanf("%s",str);

        createTrie(&root,str,-1,strlen(str));
    }

    scanf("%i",&n);

    for(i=1;    i<=n;    i++) {
        scanf("%s",str);

        printf("Case #%i:\n",i);

        if(check(root,str,-1,strlen(str)) == 0) {
            printf("No match.\n");
        }
    }

    return 0;
}
