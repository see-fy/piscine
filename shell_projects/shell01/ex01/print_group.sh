#!/bin/sh
#groups $FT_USER | tr ' ' , | tr -d '\n'
id -nG $FT_USER | tr ' ' , | tr -d '\n'
