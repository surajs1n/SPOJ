#include<bits/stdc++.h>
using namespace std;

int done(int P[][2],int i,int j) {

    int x = i;
    int y = j;

    while(P[x][0] != x) {
        x = P[x][0];
    }

    while(P[y][0] != y) {
        y = P[y][0];
    }

    if(x == y) {
        return 0;
    }

    int temp;
    if(P[x][1] >= P[y][1]) {
        P[x][1] += P[y][1];
        while(P[j][0] != j) {
            temp = P[j][0];
            P[j][0] = x;
            j = temp;
        }
        P[j][0] = x;
    }

    else {
        P[y][1] += P[x][1];
        while(P[i][0] != i) {
            temp = P[i][0];
            P[i][0] = y;
            i = temp;
        }
        P[i][0] = y;
    }

    return 1;
}

int main() {
    int run,i,j,k,w,n;  char str[105];
    scanf("%i",&run);
    while(run--) {
        scanf("%i",&n);
        vector < pair < int , pair < int,int > > > edge;

        for(i=1;    i<=n;   i++) {
            scanf("%s%i",str,&k);
            while(k--) {
                scanf("%i%i",&j,&w);
                edge.push_back(make_pair(w,make_pair(i,j)));
            }
        }

        int P[10005][2] = {0};
        for(i=1;    i<=n;   i++) {
            P[i][0] = i;    P[i][1] = 1;
        }

        int sum = 0;
        sort(edge.begin(),edge.end());
        vector < pair <int, pair<int,int> > > :: iterator it = edge.begin();
        while(it != edge.end()) {
            if(done(P,it->second.first,it->second.second)) {
                sum  += it->first;
            }
            it++;
        }
        printf("%i\n",sum);
    }
    return 0;
}
