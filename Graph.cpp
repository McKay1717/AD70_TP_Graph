//
// Created by nicolas on 13/06/19.
//
//BRAHMI Nour-eddine - IUNG Nicolas - MANFREDINI Simon
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
char Graph::tricroissant()
{
    int current_max = -1;
    char current_max_char = ' ';
    int force_size = force.size();
    nodes.clear();
    for (int i = 0; i < force_size; ++i) {

        map<char, int>::iterator itr;
        for (itr = force.begin(); itr != force.end(); ++itr) {
            int key = itr->first;
            char value = itr->second;
            if (value >= current_max) {
                current_max = value;
                current_max_char = key;
            }
        }
        force.erase(current_max_char);
        std::string s(1, current_max_char);
        nodes.push_back(s);
    }

}

void Graph::build_graph() {

    for (auto i = imcompatibilite.begin(); i != imcompatibilite.end(); ++i) {
        string s = *i;
        int n = s.length();

        char char_array[n + 1];


        strcpy(char_array, s.c_str());
        Edge e;
        e.dest = ' ';
        e.src = ' ';
        for (int k = 0; k < n; ++k) {
            if (char_array[k] == 0x00 || char_array[k] == '\n')
                continue;

            for (int j = 0; j < n; ++j) {
                if (char_array[j] == 0x00 || char_array[j] == '\n')
                    continue;
                e.src = char_array[k];
                if (e.src != char_array[j]) {
                    e.dest = char_array[j];
                    bool add = true;
                    for (auto l = edges.begin(); l < edges.end(); ++l) {
                        Edge local_e = *l;
                        if(local_e.src == e.dest and local_e.dest == e.src)
                            add = false;
                        if(local_e.src == e.src and local_e.dest == e.dest)
                            add = false;

                    }


                    if(add)
                    {
                        force[e.src]++;
                        force[e.dest]++;
                        edges.push_back(e);
                    }

                }

            }

        }

    }


}