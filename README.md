RonPaulCoin Core integration/staging tree
=====================================

RonPaulCoin Core based on original RonPaulCoin source (version 2) and updated using latest Bitcoin Core source (0.9.1).
This version built to help community integrate the latest Qt wallet.
Latest version of RonPaulCoin Core should appears on developer website after testing by developers.

Please check developer website/github for the latest confirmed updates: 
http://www.ronpaulcoin.org
https://github.com/ronpaulcoin/ronpaulcoin

In RonPaulCoin Core 0.9.1 fixed several typos of RonPaulCoin version 0.8.6 (version 2): 
- fixed issue with incorrect "(out of sync)" and "0 hour(s) behind" messages that appears sometime.
- port numbers in translation files are changed to correct RonPaulCoin ports.
- fixed incorrect checkpoint value in checkpoints.cpp (coin worked before because used checkpointsync.cpp)

~~~~~~~~~~~~~

If you love new RonPaulCoin Core wallet and wish to donate for RonPaulCoin Core wallet integration - kindly donate to me:

RonPaulCoin address: RSGH7MDNNvp5o4YEa6Y6fJGkiMhTh4Kspr

Bitcoin address: 1534GduPYsHsrvtLUp4cZs6i9iah5jup8G

Litecoin address: LcyjkbPY3Yst4sd1ph7v1jsi3dxjuqPsb3

~~~~~~~~~~~~~

Binary compiled:

OSX-64: [RonPaulCoin-Qt-0.9.1.dmg 16.3 MB]
https://mega.co.nz/#!Zkp1UYYB!VZEdW0LLN5jRo0d63np9HDHJ5JFep_QwSVsisf35a_M

Win32: [RonPaulCoinCore-0.9.1-win32.zip 15.5 MB]
https://mega.co.nz/#!Z9hHWIJa!Hq24WwyDhrjZ1hq6uifG36eca9pvonW5ytbYeObxAj8

Win32 installer: [ronpaulcoin-0.9.1-win32-setup.exe 12.9 MB]
https://mega.co.nz/#!94w0hARB!zgw_eeaTijqgs2MXFKI5rQBPGLW-fPVakvgvn_W36jw

~~~~~~~~~~~~~

Note for dev: please check translations and tests with pool operators before launch. Thanks!

~~~~~~~~~~~~~


RonPaulCoin integration/staging tree
=====================================

http://www.ronpaulcoin.org
http://www.ronpaulcoin.com

Copyright (c) 2009-2013 Bitcoin Developers
Copyright (c) 2013-2014 RonPaulCoin Developers (colinistheman,onaboat,Tranz,Dajackal)
Copyright (c) 2013-2014 RonPaulCoin Core Developers

What is RonPaulCoin?
----------------

RonPaulCoin is a more rare version of Bitcoin using scrypt as a proof-of-work algorithm.
 - 2.0 minute block targets
 - subsidy halves in 1051k blocks (~4 years)
 - ~2.1 million total coins
 - 1 coin per block
 - Difficulty retarget every block using Kimoto Gravity Well +Time Warp fix

For more information, as well as an immediately useable, binary version of
the RonPaulCoin client sofware, see http://www.ronpaulcoin.org.

License
-------

RonPaulCoin is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the RonPaulCoin
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on the
[mailing list](http://sourceforge.net/mailarchive/forum.php?forum_name=bitcoin-development).

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see `doc/coding.txt`) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/bitcoin/bitcoin/tags) are created
regularly to indicate new official, stable release versions of RonPaulCoin.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code. 

Unit tests can be compiled and run (assuming they weren't disabled in configure) with: `make check`

