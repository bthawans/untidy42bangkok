#!/bin/sh
groups $FT_USER | tr " " "," | tr -d "\n"

# id -Gn $FT_USER | tr " " "," | tr -d "\n" corrected by P.Nut
