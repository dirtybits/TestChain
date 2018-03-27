# TestChain
Experimental Blockchain
based off of Build A Blockchain With C++

http://davenash.com/2017/10/build-a-blockchain-with-c/

Compiling on Linux:

$ gcc -lstdc++ \
    -o TestChain \
    -std=c++11 \
    -stdlib=libc++ \
    -x c++ \
    main.cpp Block.cpp Blockchain.cpp sha256.cpp
./TestChain

or:

$ gcc -Wall main.cpp Block.cpp Blockchain.cpp sha256.cpp

Or Run on your C++ IDE of choice
