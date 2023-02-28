#!bin/sh
ls -l | awk 'NR%2==1'
ls -l | sed -n 'p;n'
