//
// Created by nicolas on 13/06/19.
//

#include "Graph.h"


void Graph::read_file(char *nom_fichier) {


    ifstream fichier;
    // Ouvre le fichier des distances entre villes
    fichier.open(nom_fichier, ifstream::in);
    if (!fichier.is_open()) {
        cerr << "Fichier [" << nom_fichier << "] invalide." << endl;
        exit(-1);
    }
    string word;
    int count_line = 0;


    while (getline(fichier, word, ',')) {
        if (word.length() == 1)
            nodes.push_back(word);
        else imcompatibilite.push_back(word);
    }

    fichier.close();
    build_graph();
}

void Graph::build_graph() {

    for (auto i = imcompatibilite.begin(); i != imcompatibilite.end(); ++i) {
        string s = *i;
        int n = s.length();

        // declaring character array
        char char_array[n + 1];

        // copying the contents of the
        // string to char array
        strcpy(char_array, s.c_str());
        Edge e;
        e.dest = ' ';
        e.src = ' ';
        for (int k = 0; k < n; ++k) {
            if (char_array[k] == 0x00 || char_array[k] == '\n')
                continue;
            bool add = true;

            if (e.src == ' ')
                e.src = char_array[k];
            else
                e.dest = char_array[k];
            if (e.src != ' ' && e.dest != ' ') {
                edges.push_back(e);
                e.src = e.dest;
                e.dest = ' ';


            }

        }

    }


}