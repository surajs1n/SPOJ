#include<bits/stdc++.h>

struct node {
    int value;
    char ch;
}mat[1005][1005];

int count = 1;

int dfs(int i,int j,int n,int m) {
    if( (i>=1 && i<=n) && (j>=1 && j<=m) ) {

        if( mat[i][j].value ) {
            return mat[i][j].value;
        }

        mat[i][j].value = count;
        int hold;

        if(mat[i][j].ch == 'S') {
            hold = dfs(i+1,j,n,m);
            if(hold)  {
                mat[i][j].value = hold;
            }
        } else if (mat[i][j].ch == 'E') {
            hold = dfs(i,j+1,n,m);
            if(hold)  {
                mat[i][j].value = hold;
            }
        } else if (mat[i][j].ch == 'N') {
            hold = dfs(i-1,j,n,m);
            if(hold)  {
                mat[i][j].value = hold;
            }
        } else {
            hold = dfs(i,j-1,n,m);
            if(hold)  {
                mat[i][j].value = hold;
            }
        }
        return hold;
    }
    return 0;
}

int main() {
    int i,j,k,m,n;      char str[1005];
    scanf("%i%i",&n,&m);

    for(i=1;    i<=n;   i++) {
        scanf("%s",str);
        for(j=1;    j<=m;   j++) {
            mat[i][j].ch = str[j-1];
            mat[i][j].value = 0;
        }
    }

    int answer = count;
    for(i=1;    i<=n;   i++) {
        for(j=1;    j<=m;   j++) {
            if(mat[i][j].value == 0) {
                count  = dfs(i,j,n,m);
                if(answer > count) {
                    count = answer;
                } else {
                    count++;
                    answer++;
                }
            }
        }
    }

    answer = 0;
     for(i=1;    i<=n;   i++) {
        for(j=1;    j<=m;   j++) {
            if(answer < mat[i][j].value) {
                answer = mat[i][j].value;
            }
        }
    }

    printf("%i\n",answer);
    return 0;
}
