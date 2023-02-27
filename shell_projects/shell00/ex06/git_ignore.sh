#!/bin/bash

# Change to the root directory of the Git repository
cd /mnt/c/users/lenovo/onedrive/bureau/piscine/shell_projects
# Use git ls-files to list all tracked files and pass them to git check-ignore to see if they're ignored
git status -s --ignored | grep '!!' | sed 's/!! //g'
