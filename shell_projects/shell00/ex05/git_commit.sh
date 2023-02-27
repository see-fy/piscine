#!/bin/bash

# Change to the root directory of the Git repository
cd /mnt/c/users/lenovo/onedrive/bureau/piscine/shell_projects

# Retrieve the IDs of the last 5 commits and output them to the console
git log --format="%H" -n 5
