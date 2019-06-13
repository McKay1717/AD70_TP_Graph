//
// Created by nicolas on 13/06/19.
//

#ifndef AD70_TP_GRAPH_H
#define AD70_TP_GRAPH_H


#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdio.h>
#include <string.h>
struct Edge {
    char src, dest;
};

using namespace std;
class Graph {
public:
    void read_file(char* nom_fichier);
    std::vector<string> nodes;
    std::vector<std::string> imcompatibilite;
    vector<Edge> edges;
    void build_graph();

};

#endif //AD70_TP_GRAPH_H
