#include<iostream>
#include<stdio.h>
#include<string.h>

struct node {
    char ch;
    bool flag;
}mat[105][105];

int m,n;    char str[11] = "ALLIZZWELL";

bool dfs(int i, int j,int index,int length) {
    if(index >= length) {
        return 1;
    }

    int x,y;    bool hello = 0;

    x = i;
    y = j-1;
    if(y > 0 && str[index] == mat[x][y].ch && mat[x][y].flag == 0) {
        mat[x][y].flag = 1;
        hello = hello | dfs(x,y,index+1,length);
        mat[x][y].flag = 0;
    }

    x = i-1;
    y = j-1;
    if((y > 0 && x > 0) && str[index] == mat[x][y].ch && mat[x][y].flag == 0) {
        mat[x][y].flag = 1;
        hello = hello | dfs(x,y,index+1,length);
        mat[x][y].flag = 0;
    }

    x = i-1;
    y = j;
    if(x > 0 && str[index] == mat[x][y].ch && mat[x][y].flag == 0) {
        mat[x][y].flag = 1;
        hello = hello | dfs(x,y,index+1,length);
        mat[x][y].flag = 0;
    }

    x = i-1;
    y = j+1;
    if((y <= n && x > 0) && str[index] == mat[x][y].ch && mat[x][y].flag == 0) {
        mat[x][y].flag = 1;
        hello = hello | dfs(x,y,index+1,length);
        mat[x][y].flag = 0;
    }

    x = i;
    y = j+1;
    if(y <= n && str[index] == mat[x][y].ch && mat[x][y].flag == 0) {
        mat[x][y].flag = 1;
        hello = hello | dfs(x,y,index+1,length);
        mat[x][y].flag = 0;
    }

    x = i+1;
    y = j+1;
    if((y <= n && x <= m) && str[index] == mat[x][y].ch && mat[x][y].flag == 0) {
        mat[x][y].flag = 1;
        hello = hello | dfs(x,y,index+1,length);
        mat[x][y].flag = 0;
    }

    x = i+1;
    y = j;
    if(x <= m && str[index] == mat[x][y].ch && mat[x][y].flag == 0) {
        mat[x][y].flag = 1;
        hello = hello | dfs(x,y,index+1,length);
        mat[x][y].flag = 0;
    }

    x = i+1;
    y = j-1;
    if((y > 0 && x <= m) && str[index] == mat[x][y].ch && mat[x][y].flag == 0) {
        mat[x][y].flag = 1;
        hello = hello | dfs(x,y,index+1,length);
        mat[x][y].flag = 0;
    }

    return hello;
}

int main() {

    int run,i,j,k;  char temp[105];

    scanf("%i",&run);

    while(run--) {
        scanf("%i%i",&m,&n);

        for( i=1;   i<=m;   i++) {
            scanf("%s",temp);

            for(j=1;    j<=n;   j++) {
                mat[i][j].ch = temp[j - 1];
                mat[i][j].flag = 0;
            }
        }

        bool flag = 0;

        for(i=1;    i<=m && flag == 0;   i++) {
            for(j=1;    j<=n && flag == 0;   j++) {
                if(mat[i][j].ch == 'A') {
                    mat[i][j].flag = 1;
                    flag = dfs(i,j,1,10);
                    mat[i][j].flag = 0;
                }
            }
        }

        if(!flag) {
            printf("NO\n");
        }

        else {
            printf("YES\n");
        }
    }
    return 0;
}
