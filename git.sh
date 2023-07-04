#!/bin/bash

# Add all changes to the staging area
git add .

# Prompt for the git commit message
read -p "Enter the git commit message: " git_message

# Commit the changes with the provided message
git commit -m "$git_message"

# Push the changes to the remote repository with username and password
git push https://SlimjimmyMax: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@github.com/SlimjimmyMax/alx-low_level_programming.git
