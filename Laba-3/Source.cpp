#include "Header.h"

List::List() {
    head = NULL;
    curr = NULL;
    temp = NULL;
}
void List::AddNode(string newWord, string NewData) {
    nodePtr n = new node;
    n->word = newWord;
    n->data = NewData;
    n->next = head;
    head = n;
}
void List::DeleteNode(string DelWord) {
    nodePtr delPtr = NULL;
    curr = head;
    temp = head;
    while (curr != NULL && curr->data != DelWord) {
        temp = curr;
        curr = curr->next;
    }
    if (curr == NULL) {
        cout << DelWord << " was not in the list\n";
        delete delPtr;
    }
    else {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if (delPtr == head) {
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
    }
}
void List::Print() {
    curr = head;
    while (curr != NULL) {
        cout << curr->word << " " << curr->data << endl;
        curr = curr->next;
    }
    cout << endl;
}

Hash::Hash(int Size) {
    size = Size;
    A = new List[size];
    score = 0;
}

Hash::HashKey(string word) {
    int key = 0;
    for (int i = 0; i < word.size(); i++) {
        key += (int)word[i];
    }
    key /= size;
    return key;
}

Hash::NewTabl() {
    size *= 2;

    List* B = new List[size];

    for (int i = 0; i < size / 2; i++) {

    }
}