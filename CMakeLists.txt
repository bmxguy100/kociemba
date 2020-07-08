file(GLOB Kociemba_SOURCES src/*.c)
file(GLOB Kociemba_HEADERS src/*.h) 

add_library(Kociemba STATIC ${Kociemba_SOURCES} ${Kociemba_HEADERS})
