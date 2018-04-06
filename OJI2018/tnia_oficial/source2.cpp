// O(N Log N)

#include <iostream>
#include <fstream>
using namespace std;

#define NMAX 100005

int height[NMAX], n, m, q;
long long int partial_sums[NMAX];
int a, b, c, d, poz1, poz2;


int binarySearch(int left, int right, int value) {
    int mid, answer = left - 1;
    while(left <= right) {
        mid = (left + right) / 2;
        if(height[mid] < value) {
            answer = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    return answer;
}

int main () {

   ifstream fin("tnia.in");
   ofstream fout("tnia.out");


   fin>>n>>m;
    for(int i = 1; i <= n; i++)
        fin>>height[i];

    for(int i = 1; i <= n; i++)
        partial_sums[i] = partial_sums[i - 1] + height[i];

    fin>>q;
    for(int i = 1; i <= q; i++) {
        fin>>a>>b>>c>>d;
        poz1 = binarySearch(a, c, b);
        poz2 = binarySearch(a, c, d);

      //  printf("am obtinut %d %d\n", poz1, poz2);

      // fout<<partial_sums[poz2] - partial_sums[poz1] - (poz2 - poz1) * (b - 1)
       //                  + (c - poz2) * (d - b + 1)<<endl;
         fout<<partial_sums[poz2] - partial_sums[poz1] - ((long long)poz2 - poz1) * (b - 1)
                         + ((long long)c - poz2) * (d - b + 1)<<endl;
    }

    return 0;
}
