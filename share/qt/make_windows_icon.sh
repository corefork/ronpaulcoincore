#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/ronpaulcoin.png
ICON_DST=../../src/qt/res/icons/ronpaulcoin.ico
convert ${ICON_SRC} -resize 16x16 ronpaulcoin-16.png
convert ${ICON_SRC} -resize 32x32 ronpaulcoin-32.png
convert ${ICON_SRC} -resize 48x48 ronpaulcoin-48.png
convert ronpaulcoin-16.png ronpaulcoin-32.png ronpaulcoin-48.png ${ICON_DST}

