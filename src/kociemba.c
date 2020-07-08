#include <stdio.h>
#include <stdlib.h>
#include "search.h"
#include "kociemba.h"

const char* solve(const char* facelets){
    return solution(
        facelets,
        24, 1000, 0,
        "cache"
    );
}

const char* solve_pattern(const char* facelets, const char* pattern){
    char patternized[64];
    patternize(facelets, pattern, patternized);

    return solve(patternized);
}
