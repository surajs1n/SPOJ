#include<bits/stdc++.h>
using namespace std;

struct node {
    char ch;
    int value;
}mat[55][55];

int dfs(int i,int j,int m,int n,char ch) {
    if(ch > 'Z') {
        return 0;
    }

    int x,y,result = 0;
    x = i;
    y = j-1;
    if(y > 0 && mat[x][y].ch == ch + 1) {
        if(mat[x][y].value) {
            result = mat[x][y].value;
        }
        else {
            mat[x][y].value = 1 + dfs(x,y,m,n,ch+1);
            result = mat[x][y].value;
        }
    }

    x = i-1;
    y = j-1;
    if(y > 0 && x > 0 && mat[x][y].ch == ch + 1) {
        if(mat[x][y].value) {
            result = max(result, mat[x][y].value);
        }
        else {
            mat[x][y].value = 1 + dfs(x,y,m,n,ch+1);
            result = max(result , mat[x][y].value);
        }
    }

    x = i-1;
    y = j;
    if(x > 0 && mat[x][y].ch == ch + 1) {
        if(mat[x][y].value) {
            result = max(result, mat[x][y].value);
        }
        else {
            mat[x][y].value = 1 + dfs(x,y,m,n,ch+1);
            result = max(result , mat[x][y].value);
        }
    }

    x = i-1;
    y = j+1;
    if(y <= n && x > 0 && mat[x][y].ch == ch + 1) {
        if(mat[x][y].value) {
            result = max(result, mat[x][y].value);
        }
        else {
            mat[x][y].value = 1 + dfs(x,y,m,n,ch+1);
            result = max(result , mat[x][y].value);
        }
    }

    x = i;
    y = j+1;
    if(y <= n && mat[x][y].ch == ch + 1) {
        if(mat[x][y].value) {
            result = max(result, mat[x][y].value);
        }
        else {
            mat[x][y].value = 1 + dfs(x,y,m,n,ch+1);
            result = max(result , mat[x][y].value);
        }
    }

    x = i+1;
    y = j+1;
    if(y <= n && x <= m && mat[x][y].ch == ch + 1) {
        if(mat[x][y].value) {
            result = max(result, mat[x][y].value);
        }
        else {
            mat[x][y].value = 1 + dfs(x,y,m,n,ch+1);
            result = max(result , mat[x][y].value);
        }
    }

    x = i+1;
    y = j;
    if(x <= m && mat[x][y].ch == ch + 1) {
        if(mat[x][y].value) {
            result = max(result, mat[x][y].value);
        }
        else {
            mat[x][y].value = 1 + dfs(x,y,m,n,ch+1);
            result = max(result , mat[x][y].value);
        }
    }

    x = i+1;
    y = j-1;
    if(y > 0 && x <= m && mat[x][y].ch == ch + 1) {
        if(mat[x][y].value) {
            result = max(result, mat[x][y].value);
        }
        else {
            mat[x][y].value = 1 + dfs(x,y,m,n,ch+1);
            result = max(result , mat[x][y].value);
        }
    }

    return result;
}

int main() {

    int m,n,i = 0,j,k=0;

    while(1) {
        scanf("%i%i",&m,&n);    char str[100];    k++;
        if(m==0 && n==0) {
            break;
        }

        for(i=1;    i<=m;   i++) {
            scanf("%s",str);
            for(j=1;    j<=n;   j++) {
                mat[i][j].ch = str[j-1];
                mat[i][j].value = 0;
             }
        }

        int result = 0;

        for(i=1;    i<=m;   i++) {
            for(j=1;    j<=n;   j++) {
                int count = 0;
                if(mat[i][j].ch == 'A') {
                    count = 1;
                    mat[i][j].value = 1;
                    count += dfs(i,j,m,n,'A');
                    if(count > result) {
                        result = count;
                    }
                }
            }
        }

        printf("Case %i: %i\n",k,result);
    }

    return 0;
}
