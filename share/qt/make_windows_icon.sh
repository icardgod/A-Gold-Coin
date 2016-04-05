#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/agoldcoin.ico

convert ../../src/qt/res/icons/agoldcoin-16.png ../../src/qt/res/icons/agoldcoin-32.png ../../src/qt/res/icons/agoldcoin-48.png ${ICON_DST}
