#!/bin/bash -e

VERSION=$2
TAR=../percona-xtradb-cluster-5.5_$VERSION.orig.tar.gz
NEWTAR=../percona-xtradb-cluster-5.5_$VERSION+dfsg.orig.tar.bz2
DIR=percona-xtradb-cluster-5.5-$VERSION
mkdir -p $DIR

# Unpack ready fo re-packing
tar -xzf $TAR -C $DIR --strip-components=1

# Repack excluding stuff we don't need
GZIP=--best tar -cjf $NEWTAR \
         --exclude '*percona-xtradb-cluster-tests/python/*' \
         --exclude '*percona-xtradb-cluster-tests/subunit*' $DIR

rm -rf $DIR $TAR

