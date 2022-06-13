#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <list>
#include <string>

using namespace std;

// Hashtable to implemnt 905 Jimmy

class HashTable {
    private:
        static const int hashGroups = 10;
        list<pair<int,string>> table[hashGroups]; // list 1, index 0, list 2, index 1

    public:
        bool isEmpty() const;
        int hashFunction(int key);
        void insertItem(int key, string value);
        void removeItem(int key);
        string searchTable(int key);
        void printTable();
}

#endif