#!/usr/bin/bash


git add .
echo "input your commit message: "
read commit_m
git commit -m "$commit_m"
git push

