#include <iostream>
#include <fstream>

using namespace std;

int m[10][8];

int main()
{
    ofstream fout("matrix.out");
  string s[10]={"abcdef","bc","abdeg","abcdg","bcfg","acdfg","acdefg","abc",
  "abcdefg","abcdfg"
  };


  for(int i=0; i<10; i++)
    for(int j=0; j<8; j++)
        if(s[i].length()-1>=j){
        m[i][s[i][j]-97+1]=1;
        m[i][0]++;
        }

  for(int i=0; i<10; i++){
    for(int j=0; j<8; j++)
    fout<<m[i][j]<<',';
  fout<<endl;
  }


}

