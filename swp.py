#!/usr/bin/env python3
__author__='DGideas';
#This script can help to clean .swp files from vi/vim editor tempory files
import os;
for parent,dirnames,filenames in os.walk('/home'):
	for filename in filenames:                        #输出文件信息
		#os.path.join(parent,filename)
		if (os.path.join(parent,filename)).find('.swp')!=-1:
			print(os.path.join(parent,filename));
			os.remove(os.path.join(parent,filename));

