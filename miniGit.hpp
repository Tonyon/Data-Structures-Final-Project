#ifndef miniGit_H
#define miniGit_H

#include <iostream>

struct singlyNode{
    std::string fileName;    // Name of local file
    std::string fileVersion; // Name of file in .minigit folder
    singlyNode* next;
    int version;
};

struct doublyNode{
    int commitNumber;
    singlyNode* head;
    doublyNode* previous;
    doublyNode* next;
};



class miniGit{

    public:
        miniGit();
        ~miniGit();
        void newRepository();
        void add();
        void remove();
        void commitChanges();
        void checkOut();
        int getVersion();
        void printGit();

    private:
        doublyNode* head;
};

#endif