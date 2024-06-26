#include <cstdint>
#include <vector>
#include <iostream>

#include "../include/MaxCliqueSearch.hpp"

using std::vector;
using std::cin;
using std::cout;

int main() {
  int n;
  cin >> n;
  vector<vector<bool>> graph(n, vector<bool>(n, false));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      bool is_edge;
      cin >> is_edge;
      graph[i][j] = is_edge;
    }
  }
  cout << MaxClique(graph);
}
