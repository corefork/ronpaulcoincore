// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The BitCoin developers
// Copyright (c) 2011-2014 The RonPaulCoin developers
// Copyright (c) 2013-2014 The RonPaulCoin Core developers


// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "chainparams.h"

#include "assert.h"
#include "core.h"
#include "protocol.h"
#include "util.h"

#include <boost/assign/list_of.hpp>

using namespace boost::assign;

//
// Main network
//

unsigned int pnSeed[] =
{
    0x5b798fae, 0x551199f8, 0x25bb330f
};

class CMainParams : public CChainParams {
public:
    CMainParams() {
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        // unsigned char pchMessageStart[4] = { 0xfb, 0xc0, 0xb6, 0xdb }; // RonPaulCoin: increase each by adding 2 to bitcoin's value.

        pchMessageStart[0] = 0xfb;
        pchMessageStart[1] = 0xc0;
        pchMessageStart[2] = 0xb6;
        pchMessageStart[3] = 0xdb;
        vAlertPubKey = ParseHex("04F117946F471A7FA7876054D970390EDB03410FAEEE11BB88C5AFD8C549A9849F1E77208DA726EAEF642E67AB439F011FC11B8586AC9C55436B7BD4AF1DD3968A");
                                 
                                 
        nDefaultPort = 9027;
        nRPCPort = 9026;
        // testnet
        //nDefaultPort = 19027;
        //nRPCPort = 19026;

	
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 20);
        nSubsidyHalvingInterval = 1051200;

        // Build the genesis block. Note that the output of the genesis coinbase cannot
        // be spent as it did not originally exist in the database.
        // Genesis Block:
        
        const char* pszTimestamp = "Ron Paul News 23/Dec/2013 Obamacare Could Have Meltdown";
        CTransaction txNew;
        txNew.vin.resize(1);
        txNew.vout.resize(1);
        
        txNew.vin[0].scriptSig = CScript() << 486604799 << CBigNum(4) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        txNew.vout[0].nValue = 1.0 * COIN;
        txNew.vout[0].scriptPubKey = CScript() << ParseHex("040184710fa689ad5023690c80f3a49c8f13f8d45b8c857fbcbc8bc4a8e4d3eb4b10f4d4604fa08dce601aaf0f470216fe1b51850b4acf21b179c45070ac7b03a9") << OP_CHECKSIG;
        
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nBits    = 0x1e0ffff0;
        genesis.nTime    = 1387835382;
        genesis.nNonce   = 4999242;

        //hashGenesisBlock("0x12e05e8d4a8258aed79e113ee429c5194ee1c8999f50df176ecea97380d474ab");
        hashGenesisBlock = genesis.GetHash();
        assert(hashGenesisBlock == uint256("0x12e05e8d4a8258aed79e113ee429c5194ee1c8999f50df176ecea97380d474ab"));
        assert(genesis.hashMerkleRoot == uint256("0x242fa5d7cc0bb344d707c4282ed8cbafa049153c1e2052258115e58a1a00dca1"));

        vSeeds.push_back(CDNSSeedData("ronpaulcoin.co seed #1", "108.61.83.36"));
        vSeeds.push_back(CDNSSeedData("ronpaulcoin.co seed #2", "71.94.45.245:56112"));
        vSeeds.push_back(CDNSSeedData("ronpaulcoin.co seed #3", "93.185.192.72:61404"));
        vSeeds.push_back(CDNSSeedData("ronpaulcoin.co seed #4", "84.28.132.101:50649"));
        vSeeds.push_back(CDNSSeedData("ronpaulcoin.co seed #5", "84.28.132.101:56580"));
        vSeeds.push_back(CDNSSeedData("ronpaulcoin.co seed #6", "93.185.192.72:1099"));
        vSeeds.push_back(CDNSSeedData("ronpaulcoin.co seed #7", "93.185.192.72:26125"));
        vSeeds.push_back(CDNSSeedData("ronpaulcoin.co seed #8", "24.7.226.120:49259"));
        vSeeds.push_back(CDNSSeedData("ronpaulcoin.co seed #9", "68.84.252.138:58386"));
        

        base58Prefixes[PUBKEY_ADDRESS] = list_of(60);
        base58Prefixes[SCRIPT_ADDRESS] = list_of(3);
        base58Prefixes[SECRET_KEY]     = list_of(318);
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0xD4)(0xB2)(0x44)(0xCF);
        base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0xC6)(0x2E)(0xD8);

        // Convert the pnSeeds array into usable address objects.
        for (unsigned int i = 0; i < ARRAYLEN(pnSeed); i++)
        {
            // It'll only connect to one or two seed nodes because once it connects,
            // it'll get a pile of addresses with newer timestamps.
            // Seed nodes are given a random 'last seen time' of between one and two
            // weeks ago.
            const int64_t nOneWeek = 7*24*60*60;
            struct in_addr ip;
            memcpy(&ip, &pnSeed[i], sizeof(ip));
            CAddress addr(CService(ip, GetDefaultPort()));
            addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
            vFixedSeeds.push_back(addr);
        }
    }

    virtual const CBlock& GenesisBlock() const { return genesis; }
    virtual Network NetworkID() const { return CChainParams::MAIN; }

    virtual const vector<CAddress>& FixedSeeds() const {
        return vFixedSeeds;
    }
protected:
    CBlock genesis;
    vector<CAddress> vFixedSeeds;
};
static CMainParams mainParams;


//
// Testnet (v3)
//
class CTestNetParams : public CMainParams {
public:
    CTestNetParams() {
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        pchMessageStart[0] = 0xfc;
        pchMessageStart[1] = 0xc1;
        pchMessageStart[2] = 0xb7;
        pchMessageStart[3] = 0xdc;
        nSubsidyHalvingInterval = 150;
        vAlertPubKey = ParseHex("04E424667623CDACE964F3B62C403A0333C86B0C3BF2B524EB406CA56B57AF197AFC29E8919FA29C88F206F82B592782169EDC30F840F88C89A6F66A899F51F224");
        nDefaultPort = 19027;
        nRPCPort = 19026;
        strDataDir = "testnet3";
        
        // Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nTime    = 1389749325;
        genesis.nNonce   = 1309251;  // new with same message - working

        hashGenesisBlock = genesis.GetHash();
        assert(hashGenesisBlock == uint256("0x040756dd1e0cbb4ac5f44917f4f1f1a6668c508bcc794da0840045bcc79473ff")); // from new with same phrase
        assert(genesis.hashMerkleRoot == uint256("0x242fa5d7cc0bb344d707c4282ed8cbafa049153c1e2052258115e58a1a00dca1")); // new with same phrase

        vFixedSeeds.clear();
        vSeeds.clear();
        //vSeeds.push_back(CDNSSeedData("seed", "testnet-seed.ronpaulcoin.org"));

        base58Prefixes[PUBKEY_ADDRESS] = list_of(122);
        base58Prefixes[SCRIPT_ADDRESS] = list_of(196);
        base58Prefixes[SECRET_KEY]     = list_of(239);
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0xD8)(0x2E)(0xB2)(0x88);
        base58Prefixes[EXT_SECRET_KEY] = list_of(0xF4)(0xCF)(0x2E)(0xCE);

    }
    virtual Network NetworkID() const { return CChainParams::TESTNET; }
};
static CTestNetParams testNetParams;


//
// Regression test
//
class CRegTestParams : public CTestNetParams {
public:
    CRegTestParams() {
        pchMessageStart[0] = 0xfa;
        pchMessageStart[1] = 0xb3;
        pchMessageStart[2] = 0xb5;
        pchMessageStart[3] = 0xcd;
        nSubsidyHalvingInterval = 150;
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 1);
        genesis.nTime = 1389749325;
        genesis.nBits = 0x207fffff;
        genesis.nNonce = 2;
        hashGenesisBlock = genesis.GetHash();
        nDefaultPort = 18444;
        strDataDir = "regtest";
        //assert(hashGenesisBlock == uint256("0x12e05e8d4a8258aed79e113ee429c5194ee1c8999f50df176ecea97380d474ab"));

        vSeeds.clear();  // Regtest mode doesn't have any DNS seeds.
    }

    virtual bool RequireRPCPassword() const { return false; }
    virtual Network NetworkID() const { return CChainParams::REGTEST; }
};
static CRegTestParams regTestParams;

static CChainParams *pCurrentParams = &mainParams;

const CChainParams &Params() {
    return *pCurrentParams;
}

void SelectParams(CChainParams::Network network) {
    switch (network) {
        case CChainParams::MAIN:
            pCurrentParams = &mainParams;
            break;
        case CChainParams::TESTNET:
            pCurrentParams = &testNetParams;
            break;
        case CChainParams::REGTEST:
            pCurrentParams = &regTestParams;
            break;
        default:
            assert(false && "Unimplemented network");
            return;
    }
}

bool SelectParamsFromCommandLine() {
    bool fRegTest = GetBoolArg("-regtest", false);
    bool fTestNet = GetBoolArg("-testnet", false);

    if (fTestNet && fRegTest) {
        return false;
    }

    if (fRegTest) {
        SelectParams(CChainParams::REGTEST);
    } else if (fTestNet) {
        SelectParams(CChainParams::TESTNET);
    } else {
        SelectParams(CChainParams::MAIN);
    }
    return true;
}
