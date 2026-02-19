#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;

ifstream fin("roy-floyd.in");
ofstream fout("roy-floyd.out");

//p[i][j] represents the distance matrix
int p[101][101];

int main() {
  int m, n, i, j, x, y, z, k;
    
    fin>>n>>m;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++)
            //all pairs start as "unreachable" (infinity)
            p[i][j]=INT_MAX;
        //distance from a node to itself is 0
        p[i][i]=0;
    }

    //read the edges
    for(i=1; i<=m; i++){
        fin >> x >> y >> z;
        p[x][y]=z;
    }

  // ROY-FLOYD
    for(k = 1; k<=n; k++)
        for(i = 1; i <= n; i++)
            for(j = 1; j<=n; j++){
                if(i!=j)
                    //check if going through an intermediate node yealds a shorter path
                    if(p[i][j] > p[i][k] + p[k][j])
                        p[i][j] = p[i][k] + p[k][j];
            }
  //output  
  for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++)
            if(p[i][j] != INT_MAX)
              fout << p[i][j] << ' ';
            else fout << -1 <<' ';
        fout<<endl;
    }
}
