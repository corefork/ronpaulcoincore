RonPaulCoin Core version 0.9.1 BETA 
====================

Copyright (c) 2009-2014 Bitcoin Developers
Copyright (c) 2011-2014 RonPaulCoin Developers
Copyright (c) 2013-2014 RonPaulCoin Core Developers


Distributed under the MIT/X11 software license, see the accompanying
file COPYING or http://www.opensource.org/licenses/mit-license.php.
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](http://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.


Intro
---------------------
RonPaulCoin is a free open source peer-to-peer electronic cash system that is
completely decentralized, without the need for a central server or trusted
parties.  Users hold the crypto keys to their own money and transact directly
with each other, with the help of a P2P network to check for double-spending.

Setup
---------------------
You need the Qt5 run-time libraries to run RonPaulCoin-Qt. On Debian or Ubuntu:
  `sudo apt-get install libqtgui4`

[RonPaulCoin Core](http://ronpaulcoin.com) is the original RonPaulCoin client and it builds the backbone of the network. However, it downloads and stores the entire history of RonPaulCoin transactions (which is currently several GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once. 
https://bitcointalk.org/index.php?topic=389070.0
Source is now available from https://github.com/ronpaulcoin/ronpaulcoin

Running
---------------------
The following are some helpful notes on how to run RonPaulCoin on your native platform. 

### Unix

You need the Qt4 run-time libraries to run RonPaulCoin-Qt. On Debian or Ubuntu:

	sudo apt-get install libqtgui4

Unpack the files into a directory and run:

- bin/32/ronpaulcoin-qt (GUI, 32-bit) or bin/32/ronpaulcoind (headless, 32-bit)
- bin/64/ronpaulcoin-qt (GUI, 64-bit) or bin/64/ronpaulcoind (headless, 64-bit)



### Windows

Unpack the files into a directory, and then run ronpaulcoin-qt.exe.

### OSX

Drag RonPaulCoin-Qt to your applications folder, and then run RonPaulCoin-Qt.

### Need Help?

* See the documentation at the [RonPaulCoin Wiki](http://ronpaulcoin.info)
for help and more information.
* Ask for help on the [RonPaulCoinTalk](https://bitcointalk.org/) forums, in the [Technical Support board](https://bitcointalk.org/index.php?topic=389070.0).

Building
---------------------
The following are developer notes on how to build RonPaulCoin on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-msw.md)

Development
---------------------
The RonPaulCoin repo's [root README](https://github.com/ronpaulcoin/ronpaulcoin/blob/master/README.md) contains relevant information on the development process and automated testing.

- [Coding Guidelines](coding.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)

### Resources
* Discuss on the [RonPaulCoinTalk](https://bitcointalk.org/) forums, in the [Development & Technical Discussion board](https://bitcointalk.org/index.php?topic=389070.0).


### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)

License
---------------------
Distributed under the [MIT/X11 software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](http://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
