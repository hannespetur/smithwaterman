#ifndef __INDEL_ALLELE_H
#define __INDEL_ALLELE_H

#include <string>
#include <iostream>
#include <sstream>

class IndelAllele {
    friend std::ostream& operator<<(std::ostream&, const IndelAllele&);
    friend bool operator==(const IndelAllele&, const IndelAllele&);
    friend bool operator!=(const IndelAllele&, const IndelAllele&);
    friend bool operator<(const IndelAllele&, const IndelAllele&);
public:
    bool insertion;
    int length;
    int referenceLength(void);
    int readLength(void);
    int position;
    int readPosition;
    std::string sequence;

    bool homopolymer(void);

    IndelAllele(bool i, int l, int p, int rp, std::string s)
        : insertion(i), length(l), position(p), readPosition(rp), sequence(s)
    { }
};

bool homopolymer(std::string sequence);
std::ostream& operator<<(std::ostream& out, const IndelAllele& indel);
bool operator==(const IndelAllele& a, const IndelAllele& b);
bool operator!=(const IndelAllele& a, const IndelAllele& b);
bool operator<(const IndelAllele& a, const IndelAllele& b);

#endif
