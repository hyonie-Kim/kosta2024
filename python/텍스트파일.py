import os
# 텍스트 파일 생성
'''
fName = 'C:/Users/hyonie/Desktop/git_home/kosta2024/python/text_file.txt'


with open(fName,'w', encoding = 'utf-8')as fp:
        fp.writelines("Hello, World!" + '\n')
        
'''
#  파일 내용 읽어오기
with open('C:/Users/hyonie/Desktop/git_home/kosta2024/python/text_file.txt','r', encoding='utf-8') as fName:

 strline = fName.readlines()

line_legths = []

for strlist in strline:        
        print(strlist)
        line_length = len(strlist)-1
        print("줄의 길이:",line_length)
        line_legths.append(line_length)
        
print("최대 길이:",max(line_legths))

'''

 while True:
      strline = fName.readlines()
      if strline == "":
              break 

 print(len(strline))



'''

