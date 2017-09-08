#!/bin/sh

stat -s bomb.txt | cut -c112- | rev | cut -c104- | rev | tr '%' 'n'