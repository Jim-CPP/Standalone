cls

del *.exe

windres Resource.rc -o Resource.o

g++ -mwindows -m64 -static -Wall -Wextra Standalone.cpp Resource.o -o Standalone.exe
