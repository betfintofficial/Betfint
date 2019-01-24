#!/bin/bash

TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
SRCDIR=${SRCDIR:-$TOPDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

BETFINTD=${BETFINTD:-$SRCDIR/betfintd}
BETFINTCLI=${BETFINTCLI:-$SRCDIR/betfint-cli}
BETFINTTX=${BETFINTTX:-$SRCDIR/betfint-tx}
BETFINTQT=${BETFINTQT:-$SRCDIR/qt/betfint-qt}

[ ! -x $BETFINTD ] && echo "$BETFINTD not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
BTCVER=($($BETFINTCLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }'))

# Create a footer file with copyright content.
# This gets autodetected fine for betfintd if --version-string is not set,
# but has different outcomes for betfint-qt and betfint-cli.
echo "[COPYRIGHT]" > footer.h2m
$BETFINTD --version | sed -n '1!p' >> footer.h2m

for cmd in $BETFINTD $BETFINTCLI $BETFINTTX $BETFINTQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${BTCVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${BTCVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
