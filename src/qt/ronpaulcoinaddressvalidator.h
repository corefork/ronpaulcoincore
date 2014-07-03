// Copyright (c) 2011-2014 The RonPaulCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef RONPAULCOINADDRESSVALIDATOR_H
#define RONPAULCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class RonPaulCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit RonPaulCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** RonPaulCoin address widget validator, checks for a valid ronpaulcoin address.
 */
class RonPaulCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit RonPaulCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // RONPAULCOINADDRESSVALIDATOR_H
