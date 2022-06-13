#include "hashtable.h"

int main() {
    HashTable HT;

    if (HT.isEmpty()) {
        cout << "Correct Answer. Good job";
    }
    else {
        cout << "oh no. We need to check out the code!" << endl;
    }

    HT.insertItem(905, "Mina");
    HT.insertItem(533, "Tzuyu");
    HT.insertItem(532, "Momo");
    HT.insertItem(983, "Sana");
    HT.insertItem(829, "Dahyun");
    HT.insertItem(029, "Nayeon");
    HT.insertItem(001, "Jihyo");

    HT.printTable();

    HT.removeItem(532);
    HT.removeItem(905);

    
    if (HT.isEmpty()) {
        cout << "oh no. We need to check out the code!" << endl;
    }
    else {
        cout << "Correct Answer. Good job";
    }

    return 0;
}