#!/bin/bash

let count=0;
cat $1 | while IFS='' read -r content_line
do
	echo "${count}: ${content_line}";
	((count++));
done
