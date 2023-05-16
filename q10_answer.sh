#!/bin/bash

# Create the 'final' folder
mkdir final
cd final

# Create the 'src' folder
mkdir src
cd src

# Create 'main.cpp' and 'header.h' files
touch main.cpp header.h

# Go back to the 'final' folder
cd ..

# Create the 'data' folder
mkdir data
cd data

# Create 'main' and 'backup' folders
mkdir main backup

# Create 'mainDB.db' and 'backupDB.db' files
touch main/mainDB.db backup/backupDB.db

# Go back to the 'final' folder
cd ..

# Create the 'config' folder
mkdir config
cd config

# Create 'config.yml' file
touch config.yml

# Go back to the 'final' folder
cd ..

echo "Folder structure created successfully!"
