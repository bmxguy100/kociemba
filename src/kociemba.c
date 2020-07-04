#include <stdio.h>
#include <stdlib.h>
#include "search.h"
#include "kociemba.h"

char* solve(const char* facelets){
    return solution(
        facelets,
        24, 1000, 0,
        "cache"
    );
}

char* solve_pattern(const char* facelets, const char* pattern){
    char patternized[64];
    patternize(facelets, pattern, patternized);

    return solve(patternized);
}
