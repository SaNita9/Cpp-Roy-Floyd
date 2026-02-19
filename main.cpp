#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("roy-floyd.in");
ofstream fout("roy-floyd.out");

int p[101][101];


int main() {
  int m, n, i, j, x, y, z, k;
    
    fin>>n>>m;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            p[i][j]=1001;
        p[i][i]=0;
    }
    
    for(i=1; i<=m; i++){
        fin>>x>>y>>z;
        p[x][y]=z;
    }


  // for(i=1; i<=n; i++){
  //     for(j=1; j<=n; j++)
  //         cout<<p[i][j]<<' ';
  //     cout<<endl;
  // }
  // cout<<"_________________"<<endl;

  
    for(k=1; k<=n; k++)
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++){
                if(i!=j)
                    if(p[i][j]>p[i][k]+p[k][j])
                        p[i][j]=p[i][k]+p[k][j];
            }
    
  for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            if(p[i][j]!=1001)fout<<p[i][j]<<' ';
                else fout<<-1<<' ';
        fout<<endl;
    }
}