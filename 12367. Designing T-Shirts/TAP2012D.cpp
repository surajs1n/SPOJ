#include<stdio.h>
#include<string.h>

struct trie {
    int a,b;
    trie *next[26];

    trie() {
        a = b = 0;
        int i;

        for(i=0;    i<26;   i++) {
            next[i] = NULL;
        }
    }
}*root = NULL;

void createTrie_18(trie **root, char *str, int index,int lenght) {

    if(*root == NULL) {
        *root = new trie;
    }

    ((*root)->a)++;

    if(index == lenght - 1) {
        return;
    }

    createTrie_18(&(*root)->next[str[index + 1] - 'A'], str, index + 1,lenght);
}

void createTrie_21(trie **root, char *str, int index,int lenght) {

    if(*root == NULL) {
        *root = new trie;
    }

    ((*root)->b)++;

    if(index == lenght - 1) {
        return;
    }

    createTrie_21(&(*root)->next[str[index + 1] - 'A'], str, index + 1,lenght);
}

void calculateValue(trie **temp, int &sum) {

    if(*temp != root) {
        sum += ((*temp)->a > (*temp)->b) ? (*temp)->b : (*temp)->a;
    }

    int i;

    for(i=0;    i<26;   i++) {
        if((*temp)->next[i] != NULL) {
            calculateValue(&(*temp)->next[i],sum);
        }
    }

    delete (*temp);

}

int main() {

    int n,i;  char str[105];

    while(1) {

        scanf("%i",&n);

        if(n == -1) {
            return 0;
        }

        root = new trie;

        for(i=0;    i<n;    i++) {
            scanf("%s",str);
           // printf("%s\n",str);

            createTrie_18(&root,str,-1,strlen(str));
        }

        for(i=0;    i<n;    i++) {
            scanf("%s",str);
           // printf("%s\n",str);

            createTrie_21(&root,str,-1,strlen(str));
        }

        int sum = 0;

        calculateValue(&root,sum);

        root = NULL;

        printf("%i\n",sum);

    }
}
