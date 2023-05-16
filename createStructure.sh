#!/bin/bash

# Create the main folder
mkdir final
cd final

# Create subfolders
mkdir src data config

# Create files in src folder
cd src
touch main.cpp header.h
cd ..

# Create folders in the data folder
cd data
mkdir main backup

# Create files in backup folder
cd backup
touch mainDB.db backupDB.db
cd ..

# Create file in config folder
cd ../config
touch config.yml

# Go back to the original directory
cd ..

echo "Folder structure created successfully!"
