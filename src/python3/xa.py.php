#!/usr/bin/python3

# M3TIOR 2017
#	E[x]plicit Assebler
#	XA -- CHA -- Tea
#
#	Tea party anyone?
#

<?php7
	// grab usefull info like version NO.
?>

class XaBinding():
	type = None
	location = None
	value = None

class XaOpToken():
	name = None # DENOTE
	type = None # DENOTE
	location = None # Tuple (begin,end)
	contents = None # DENOTE
	size = None # DENOTE
	def __init__(self, statment, location):
		self.location = location




#def semitokenize(file, COUNT=0):
#	if (math.isnan(COUNT)):
#		raise TypeError("COUNT is not a number!")
#	else if (COUNT < 0):
#		raise ValueError("COUNT cannot be negative!")
#
#
#	l=0
#	while ( COUNT==0 ? True : (l < COUNT) ):
#		#-----------------------------------
#		# PARSE THINGS HERE
#
#		#-----------------------------------
#		l++

def preprocess(asm_text):
	out_text = ""
	multilinecomment = False
	for line in asm_text.split("\n"):
		if multilinecomment:
			continue

		cloc = line.find("\\\\")
		omcloc = line.find("\\*")
		cmcloc = line.find("*\\")
		if cloc != -1:
			line = line[0: cloc]
		if mcloc != -1:
			line = line[0: mcloc]





def tokenize(asm_text):
	r = []; # return value
	b = 0; # begin statment
	e = 0; # end statment
	for i in range(0, len(asm_text)):
		if asm_text[i] == ";":
			r.append(XaToken(asm_text[b:e], (b,e)))
			b = e+1;


def parse():

def assemble():
	pass

def link():
	pass



if __name__ == "__main__": # Exec main code block
	from optparse import ArgumentParser
	import math

	parser = ArgumentParser('xa')
