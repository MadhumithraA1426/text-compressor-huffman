#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <string>
#include <unordered_map>

class Huffman
{
public:
    void readFile(const std::string& filename);

private:
    std::unordered_map<char, int> frequencyMap;
};

#endif