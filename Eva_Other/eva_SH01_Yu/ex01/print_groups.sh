#!/bin/sh
id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'

# Gn All Group Name
# tr Translate from space to comma
# -d delete


