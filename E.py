#Aslam Mahmud Siam 
key = int(input()) 
value = input() 
s ="" 
for i in value:
 m = ord(i)-key
 if(m<65):
      m+=26 
  s += chr(m) 
print(s)
