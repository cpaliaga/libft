#!/bin/sh
name = $ 1
git add .
git commit -m {name}
git push
git status
git log

