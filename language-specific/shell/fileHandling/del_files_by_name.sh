#! /bin/bash

# Only works on /home/username files
# Should not be run as sudo, program will not cause any damage but will not work as expected

echo -e "\n"
echo -e "Please be careful as this program will remove all instances '$1' in your /home/$USERNAME directory.\n"
echo -e "Are you sure you want to continue (y/n): \c"
read perm
echo -e "\n"
if [ $perm == "y" ]
then
	file_name=$1 
	if [ -e /home/$USERNAME/$file_name* ] || [ -e /home/$USERNAME/.$file_name* ] || [ -e /home/$USERNAME/cache/$file_name* ]
	then
		rm -rf /home/$USERNAME/$file_name*
		rm -rf /home/$USERNAME/.$file_name*
		rm -rf /home/$USERNAME/.cache/$file_name*
		echo "All instances of '$file_name' deleted successfully." 
	else
		echo "'$file_name' not found."
	fi
else 
	echo "Quitting program..."
fi
echo -e "\n"
