import os
import csv

with open('data.txt', 'rb') as f:
	data = f.read ()

print (bytearray(data))
#for c in data:

#	print (ord(c))
