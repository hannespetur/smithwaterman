#ifndef __LEFTALIGN_H
#define __LEFTALIGN_H

#include <algorithm>
#include <map>
#include <vector>
#include <list>
#include <utility>
#include <sstream>

#include "IndelAllele.h"
#include "convert.h"

#ifdef VERBOSE_DEBUG
#define LEFTALIGN_DEBUG(msg) \
    if (debug) { cerr << msg; }
#else
#define LEFTALIGN_DEBUG(msg)
#endif

bool leftAlign(std::string& alternateQuery, std::string& cigar, std::string& referenceSequence, int& offset, bool debug = false);
bool stablyLeftAlign(std::string alternateQuery, std::string& cigar, std::string referenceSequence, int& offset, int maxiterations = 20);
int countMismatches(std::string& alternateQuery, std::string& cigar, std::string& referenceSequence);

std::string mergeCIGAR(const std::string& c1, const std::string& c2);
std::vector<std::pair<int, std::string> > splitCIGAR(const std::string& cigarStr);
std::string joinCIGAR(const std::vector<std::pair<int, std::string> >& cigar);


#endif
