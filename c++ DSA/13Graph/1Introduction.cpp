#include <iostream>
using namespace std;

int main() {

    int n = 4;

    int graph[4][4] = {0};

    graph[0][1] = 1;
    graph[1][0] = 1;

    graph[0][2] = 1;
    graph[2][0] = 1;

    graph[1][3] = 1;
    graph[3][1] = 1;

    graph[2][3] = 1;
    graph[3][2] = 1;

    return 0;
}