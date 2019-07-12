import os
import numpy as np
import csv

mdirpath = ""
originpath = mdirpath+r"\origin"
hostp = mdirpath + r"\test"
fsecret = mdirpath+r"data.txt"

for filename in os.listdir (originpath):
	print (filename)