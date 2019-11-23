import sys
for year in sys.stdin:
 if int(year)%4 == 0 and int(year)%100 != 0 :
  print('閏年')
 
 elif int(year)%400 == 0 :
  print('閏年')
  
 else :
  print('平年')
