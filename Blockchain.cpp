#include "Blockchain.h"

Blockchain::Blockchain(){
    _vChain.emplace_back(Block(0, "Genesis Block"));
    _nDifficulty = 6;
}

// AddBlock method
void Blockchain::AddBlock(Block bNew){
    bNew.sPrevHash = _GetLastBlock().GetHash();
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}

// _GetLastBlock method
Block Blockchain::_GetLastBlock() const {
    return _vChain.back();
}