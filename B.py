#Aslam Mahmud Siam 
for i in range(int(input())):
	a,b = map(int,input().split())
	if(a!=0):
		print("Case %d:"%(i+1),abs(a))
	else:
		print("Case %d:"%(i+1),b)
