'''
튜플은 읽기전용이다. 출력은 되는데 입력은 안된다. 
'''
tp1 = (1,2,3,4,5,6)
tp2 = 4,5,6

tp3 = (1,)
tp4 =1,

print(tp1)
print(tp2)
print(tp3)
print(tp4)
'''
요소 별로 출력
'''
print(tp1[1])


print(tp1[0] + tp1[1] + tp1[2])

'''
튜플의 범위 접근
튜플이름[시작인덱스:끝인덱스+1]
'''

print(tp1[1:3])
#두번째에서 끝까지 출력됨
print(tp1[1:])
print(tp1[:3])



