#!/bin/sh
TXT = "date +%d%m%A%H%M"
git status
git add .
git commit -m date $TXT 
git push
git status
