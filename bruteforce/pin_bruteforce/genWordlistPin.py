#!/usr/bin/python3

import string, random
 
#============ Word List Gen ============
minimum= int(input('Please enter the minimum length of any give word to be generated: '))
maximum= int(input('Please enter the maximum length of any give word to be generated: '))
wordlistLength= int(input('Please enter the max number of words to be generate in the dictionary: '))
 
alphabet = string.digits 
word=''
FILE = open("./wordlistPins.txt","w")
for listLength in range(0,wordlistLength):
  for digit in random.sample(alphabet,random.randint(minimum,maximum)):
      word+=digit
  FILE.write(word+'\n')
  word=''
FILE.close()
print ('DONE!') 
