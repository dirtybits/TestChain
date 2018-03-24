#include <cstdint>
#include <iostream>

class Block{
public:
    /* links each block to previous block */
    std::string sPrevHash;
    /* constructor signature
     * uses const and '&' to pass by reference and cannot change
     * improves efficiency, saves memory */
    Block(uint32_t nIndexIn, const std::string &sDataIn);
    std::string GetHash();
    void MineBlock(uint32_t _nDifficulty);

private:
    uint32_t _nIndex;
    int64_t _nNonce;
    std::string _sData;
    std::string _sHash;
    time_t _tTime;

    std::string _CalculateHash() const;

};

