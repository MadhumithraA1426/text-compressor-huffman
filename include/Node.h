#ifndef NODE_H
#define NODE_H

class Node
{
public:
    char ch;
    int frequency;

    Node* left;
    Node* right;

    Node(char c, int freq)
    {
        ch = c;
        frequency = freq;
        left = nullptr;
        right = nullptr;
    }
};

#endif