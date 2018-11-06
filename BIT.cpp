#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <complex>
#define MAX_N 300001
using namespace std;
typedef long long lld;

int n,q,x,y;
lld ret = 0LL;

lld niz[MAX_N];
lld new_niz[MAX_N];

lld tree[MAX_N];
int read(int idx)
{
  int sum = 0;
  while(idx > 0){
    sum += tree[idx];
    idx -= (idx & -idx);
  }
  return sum;
}
void update(int idx, int val){
  while(idx <= n){
    tree[idx]  += val;
    idx += (idx & -idx);
  }
}
int main()
{
  return 0;
}
