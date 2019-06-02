#include <stdio.h>
#include <string.h>

struct trie {
    int count;
    trie *next[10];
}*root = NULL;


void createTrie(trie **root,char *str,int index,int length) {

    if(index > length) {
        return;
    }

    if(*root == NULL) {
        *root = new trie;
        (*root)->count = 0;

        for(int i=0;    i<10;   i++) {
            (*root)->next[i] = NULL;
        }
    }

    (*root)->count++;

    createTrie(&(*root)->next[str[index + 1] - '0'], str, index+1, length);
}

void deleteTrie(trie **root, char *str,int index,int length) {

    if(index >= length) {
        int length = 8,i;

        printf("%c%c ",str[0],str[1]);

        for(i=2,length = 8;    length;  i++,length--) {
            printf("%c",str[i]);
        }

        printf(" ");

        for(length = 4;    length;  i++,length--) {
            printf("%c",str[i]);
        }

        printf(" ");

        for(length = 4;    length;  i++,length--) {
            printf("%c",str[i]);
        }

        printf(" ");

        for(length = 4;    length;  i++,length--) {
            printf("%c",str[i]);
        }

        printf(" ");

        for(length = 4;    length;  i++,length--) {
            printf("%c",str[i]);
        }

        printf(" %i\n",(*root)->count);
    }

    int i;

    for(i=0;    i<10;   i++) {
        if((*root)->next[i] != NULL) {
            str[index + 1] = i+'0';
            deleteTrie(&(*root)->next[i],str,index+1,length);
        }
    }

   // delete *root;
}
int main() {

    int run,n;

    scanf("%i",&run);

    while(run--) {

        scanf("%i",&n);

        while(n--) {

            char str[55] = {0},temp[15] = {0};

            scanf("%s",str);

            scanf("%s",temp);
            strcat(str,temp);

            scanf("%s",temp);
            strcat(str,temp);

            scanf("%s",temp);
            strcat(str,temp);

            scanf("%s",temp);
            strcat(str,temp);

            scanf("%s",temp);
            strcat(str,temp);

            createTrie(&root,str,-1,25);
        }

        char hold[30] = {0};

        deleteTrie(&root,hold,-1,25);

        root = NULL;

        fflush(stdin);

        printf("\n");
    }

    return 0;
}
