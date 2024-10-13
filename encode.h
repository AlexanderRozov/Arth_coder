//
// Created by fog54 on 13.10.2024.
//

#ifndef ARTCDODER_ENCODE_H
#define ARTCDODER_ENCODE_H


#pragma once
#include "compress.h"

class Encode : public Compress
{
    int low, high;
    int opposite_bits;
    int buffer;
    int	bits_in_buf;

    ifstream in;
    ofstream out;
public:
    Encode();
    ~Encode();

    void write_bit( int bit);
    void output_bits(int bit);
    void end_encoding();
    void encode_symbol(int symbol);
    void encode(char *infile, char *outfile);

};

#endif //ARTCDODER_ENCODE_H
